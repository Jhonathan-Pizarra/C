#include <stdio.h>

//Otra forma de definir una cosntante:
#define RADIAN 57.2958 //NO Coloques el ";" cuando declares una constante de tipo #define

int main(){

    //Declaracion y asignacion
    int var1;
    var1 = 10;

    //Declaracion e inicializacion
    int var2 = 10;

    //Tipos de datos:
    int entero = 9;
    float flotante = 10.23;
    double decimal = 0.3345;
    char caracter = 'Z';

    //Constantes: pueden ser de cualquier tipo de dato:
    const double PI = 3.14; //NO cambia su valor una vez se le asigna su valor

    //Impresion:
    //Enteros
    printf ("%i \n", entero);
    //Flotantes
    printf ("%f \n", flotante);
    //Decimales
    printf("%f \n", decimal);
    //Caracteres
    printf ("%c \n", caracter);
    //Hexadecimales
    printf ("%x \n", alfanumércio);
    //Constantes:
    printf("%f \n", PI);
    printf("%f \n", RADIAN); //si le hubieras puesto ";" al #define te hubiera dado error aqui


    return 0;
}

