#include <stdio.h>
/*
//1) Prototipo
void saluda(int num_times); */
/*function de tipo void*//*

int main(){

    //Dado que los punteros pueden apuntar a una dirección en cualquier ubicación de la memoria, también pueden apuntar al inicio del código ejecutable.
    //Los punteros a funciones, o punteros a función , apuntan al código ejecutable de una función en la memoria.
    // Los punteros de función se pueden almacenar en una matriz o pasar como argumentos a otras funciones.
    //Una declaración de puntero de función usa el * tal como lo haría con cualquier puntero :

    //return_type (* func_name) (parámetros)
    //Los paréntesis alrededor de (* func_name) son importantes. Sin ellos, el compilador pensará que la función está devolviendo un puntero .

    //3) Invocacion
    void (*funptr)(int);  */
/* function de tipo puntero *//*

    funptr = saluda;  */
/* pointer assignment: puede escribirse también &saluda, *saluda, pero no es necesario *//*

    funptr(3);  */
/* function call *//*


    //El nombre de una función apunta al inicio del código ejecutable, al igual que el nombre de un arreglo  apunta a su primer elemento.

    return 0;
}


//2) Definir funcion
void saluda(int num_times) {
    int k;
    for (k = 0; k < num_times; k++)
        printf("Hola \n");
}*/


//Ejercicio 2; ARREGLO DE FUNCIONES PUNTERO
#include <stdio.h>

/*
//1) Prototipos
int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

int main()
{
    int x, y, choice, result;
    //3) Invocacion:
    int (*op[4])(int, int); //4 porque el tamaño es de 4, 1 por cada operacion matemática

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;
    printf("Ingresa 2 enteros: ");
    scanf("%i %i", &x, &y);
    printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice); //recuerda, cuando uses scanf debes usar &choice (ver entradas)
    //La declaración int (* op [4]) ( int , int ); declara el arreglo de punteros. Cada elemento del arreglo debe tener los mismos parámetros y tipo de retorno.
    // En este caso, las funciones asignadas al arreglo tienen dos parámetros int y devuelven un int .
    // La sentencia result = op [elección] (x, y); ejecuta la función apropiada según la elección del usuario.
    // Los enteros ingresados previamente son los argumentos pasados ​a la función.
    result = op[choice](x, y);
    printf("%d", result);

    return 0;
}

//2) Definciiones

int add(int x, int y) {
    return(x + y);
}

int subtract(int x, int y) {
    return(x - y);
}

int multiply(int x, int y) {
    return(x * y);
}

int divide(int x, int y) {
    if (y != 0)
        return (x / y);
    else
        return 0;
}*/
