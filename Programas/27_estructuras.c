#include <stdio.h>

//Una estructura es un tipo de datos definido por el usuario, que agrupa variables relacionadas pero con de diferentes tipos de datos
//Una declaración de estructura incluye
// la palabra clave struct ,
// una etiqueta de estructura para hacer referencia a la estructura
// y llaves {} con una lista de declaraciones de variables llamadas miembros
//Una estructura también se denomina tipo de datos compuestos o agregados . Algunos idiomas se refieren a las estructuras como registros.
//Debem ser declaradas fuera de main

struct course {
    int id;
    char title[40];
    float hours;
};//No olvide poner un punto y coma después de la declaración de estructura.
//Los miembros de la estructura pueden ser de cualquier tipo de datos: tipos básicos, cadenas, matrices, punteros e incluso otras estructuras,

int main(){

    //DECLARAR UNA VARIABLE DE TIPO ESTRUCTURA.
    //Para declarar variables de un tipo de datos de estructura, utilice la palabra reservada struct, luego el nombre de la estructura, y por último el nombre de la variable.
    struct course variable; //Una variable de estructura se almacena en un bloque de memoria contiguo. El operador sizeof puede  usarse para obtener el número de bytes para una estructura,

    //DECLARAR E INCIALIZAR
    //Existen 3 maneras de ahcelo:
    //1)
    struct estudiante variable_1 = {19, 9, "Batman!"};
    //2)
    struct estudiante variable_2;
    variable_2 = {struct course}{19, 9, "Batman!"};
    //3)
    struct estudiante variable_3 = { .grade = 9, .age = 19, .name = "Batman!"}
    //En el ejemplo anterior, .grade se refiere al miembro de grado de la estructura.
    // Del mismo modo, .age y .name se refieren a la edad y el nombre de los miembros.

    //ACESO A MIEMBROS
    //Se puede acceder a los miembros de una variable de estructura utilizando . (punto) entre el nombre de la variable y el nombre del miembro.
    //Por ejemplo, para asignar un valor a la variable "s1" del miembro de edad sería como:
    s1.edad = 19;
    //También puede asignar una estructura a otra del mismo tipo:
    struct estudiante variable_4 = {19, 9, "Batman!"};
    variable_4 = variable_5;

    //TYPEDEF
    //typedef crea una "definición de tipo" que simplifica el código y hace que un programa sea más fácil de leer.
    //typedef se usa comúnmente con estructuras porque elimina la necesidad de usar la palabra clave struct al declarar variables.
    //Debem ser declaradas fuera de main (como las estructuras, pero en este caso lo haré aqui para la explicacion)

    typedef struct {
        int id;
        char title[40];
        float hours;
    } course;

    course primero;
    course segundo;
    //Ten en cuenta que una etiqueta de estructura ya no se usa, sino que está al final antes del ";" y que aparece un nombre typedef antes de la declaración de estructura.
    //Ahora ya no necesitamos usar la palabra struct para declarar variables, el código es más limpio y más fácil de leer.


    return 0;
}

