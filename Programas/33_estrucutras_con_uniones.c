//Las uniones se utilizan a menudo dentro de las estructuras porque
// una estructura puede tener un miembro para realizar un seguimiento de qué miembro de la unión almacena un valor.
//Por ejemplo, en el siguiente programa, la estructura de un vehículo usa un número de identificación del vehículo (VIN) o una identificación asignada, pero no ambos:

#include <stdio.h>
#include <string.h>

typedef struct {
    char make[20];
    int model_year;
    int id_type; /* 0 for id_num, 1 for VIN */

    union {
        int id_num;
        char VIN[20];
    } id;
} vehicle;

//Tenga en cuenta que la unión se declaró dentro de la estructura. Al hacer esto, se requería un "nombre sindical" (id) al final de la declaración.
//Una unión con una etiqueta de unión podría haber sido declarada fuera de la estructura, pero con un uso tan específico, la unión dentro de la estructura facilita la comprensión del código.


int main() {
    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098;
    // Tenga en cuenta también que el operador de punto se utiliza dos veces para acceder a miembros de unión de miembros de estructura.
    // El id_type realiza un seguimiento de qué miembro de la unión almacena un valor.
    printf("Car %s, %d", car1.make, car1.model_year);

    // Las siguientes declaraciones muestran los datos de car1, utilizando id_type para determinar qué miembro de la unión leer
    printf("Make: %s\n", car1.make);
    printf("Model Year: %d\n", car1.model_year);
    if (car1.id_type == 0)
        printf("ID: %d\n", car1.id.id_num);
    else
        printf("ID: %s\n", car1.id.VIN);


    return 0;
}

//Una unión también puede contener una estructura