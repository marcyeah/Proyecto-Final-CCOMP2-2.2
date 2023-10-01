#include <string>

class Estudiante{
    public:
        Estudiante(std::string codigo, std::string* profesores) : cod(codigo){
    /* Aqui se copia cada item del arreglo de "profesores" incluyendolo en el arreglo "prof" en la posición que le
       corresponde, cabe recalcar que el arreglo es de tamaño 6 puesto que es el máximo de profesores que un alumno
       puede tener 
    */
            for(int i{0}; i < 6; i++){
                profesores[i] = prof[i];
            }
        }

    // El asesor puede llamar a esta función para aumentar el número de contribuciones en uno
        void añadirContribucion(){
            ncont++;
        }

    /* Aqui se implementa la clase friend Estudiante-Profesor, recibiendo como primer parámetro un número
       entero que sería la valoracion y el segundo parametro que sería un objeto referenciado de la clase "Profesor"
    */
        void setValoracion(int n, Profesor& profesor){
            if(n > 1){
                profesor.val = n;
                ncont++;
            }
        }

        int getContribuciones(){
            return ncont;
        }

    private:
        std::string cod;
        std::string prof[6];
        int ncont{0};
};