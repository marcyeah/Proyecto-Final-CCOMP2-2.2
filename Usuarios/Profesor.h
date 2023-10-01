#include <iostream>
#include <string>
#include "Estudiante.h"
#include "Usuario.h"

using namespace std;

class Profesor : public Usuario{
	private:
		string m;
		int v{1};
		string c;
		
	public:
		Profesor(std::string correo, std::string carrera, std::string nombre, string materia, int valoracion) :
		Usuario(correo, carrera, nombre), m(materia), v(valoracion), c(carrera){
			if (v < 1) {
				v = 1;
			}
		}

		void setMateria(int mat) {
			m = mat;
		}

		string getMateria() {
			return m;
		}

		void setValoracion(int valoracion) {
			v = valoracion;
		}

		int getValoracion() {
			return v;
		}

		void setCarrera(string carrera){
			c = carrera;
		}

		string getCarrera() {
			return c;
		}

		friend class Estudiante;
};