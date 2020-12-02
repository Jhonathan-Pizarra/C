//C está diseñado para ser un lenguaje de bajo nivel que puede acceder fácilmente a ubicaciones de memoria y realizar
#include <stdio.h>

//Ejemplo 1
/*
int main(){

    int num;
    printf("Ingrese un número:");
    //Por ejemplo: la función scanf () coloca el valor ingresado por el usuario en la ubicación, o dirección , de la variable.
    // Esto es necesario porque scanf coloca un valor de entrada en una dirección variable.
    scanf("%d", &num ); ////El signo & antes del nombre de la variable es el operador de dirección . Da la dirección, o ubicación en la memoria, de una variable.

    //Una dirección de memoria se da como un número hexadecima, ya que es más facil referenicar un número hexadecimal de 8 caracteres que  32 1 y 0 en binarios
    return 0;
}
*/

//Ejemplo 2
/*void test(int k);
int main(){

    int i = 0; //La dirección de una variable permanece igual desde el momento en que se declara hasta el final de su alcance.

    printf("La direcicon de i es %x \n", &i);
    test(i);
    printf("La direcicon de i es %x \n", &i);
    test(i);


    return 0;
}


void test(int k) {
    //La dirección de una variable permanece igual desde el momento en que se declara hasta el final de su alcance.
    printf("La direccion de k es %x \n", &k);
}*/

//Ejercicio 3
// Los punteros en C, permiten trabajar fácilmente con ubicaciones de memoria.
// Son fundamentales para matrices, cadenas y otras estructuras de datos y algoritmos.
// Un puntero es una variable que contiene la dirección en memoria de otra variable.
// En otras palabras, "apunta" a la ubicación asignada a una variable y puede acceder indirectamente a la variable, su ubicacion y su valor.

// nomenclatura: tipo de puntero *nombre -> int *puntero
// int es el tipo de datos al que apuntará el puntero
// El asterisco * declara un puntero
// puntero es el nombre de la variable o identificador usado para el puntero

/*
int main(){

    */
/*REGLAS:
     * Los punteros deben inicializarse en NULL hasta que se les asigne una ubicación válida.
     * A los punteros se les puede asignar la dirección de una variable usando el signo  "&" .
     * Para ver a qué apunta un puntero , utilice * nuevamente, como en * p .
     * En este caso, el * se denomina operador de indirección o desreferencia . El proceso se llama desreferenciar .
     * *//*

    int j = 63;
    int *p = NULL;
    p = &j;

    printf ("La dirección de j es %x \n", &j); //Direccion hexadecimal de "j"
    printf ("p contiene la dirección %x \n", p); //Direccion hexadecimal de "j" accedida mediante el puntero
    printf ("El valor de j es %d \n", j); //Valor de "j"
    printf ("p apunta al valor %d \n", *p); //Valor de "j" encontrado en la dirección de "j"
    printf ("\n");



    //Algunos algoritmos usan un puntero a un puntero .
    // Este tipo de declaración de variable usa ** , y se le puede asignar la dirección de otro puntero
    int x = 12;
    int *puntero = NULL;
    int **punteroAPuntero = NULL;
    puntero = &x;
    punteroAPuntero = &puntero;
    printf ("La dirección de x es %x \n", &x); //Direccion hexadecimal de "x"
    printf ("puntero contiene la dirección %x \n", puntero); //Direccion hexadecimal de "x" accedida mediante el puntero
    printf ("puntero apunta a puntero, tiene la direccion de %x \n", punteroAPuntero); //Direccion hexadecimal de "puntero" accedida mediante otro puntero
    printf ("El valor de x es %d \n", x); //Valor de "x"
    printf ("puntero apunta al valor %d \n", *puntero); //Valor de "x" encontrado en la dirección de "x"
    printf ("puntero a puntero apunta al valor %d \n", *punteroAPuntero); //Valor de "puntero" encontrado en la dirección de "del puntero" encontrada por el otro puntero que apunta al puntero


    return 0;
}
*/

/*
//EJERCICIO 4

int main(){
    */
/*Los punteros se pueden usar en expresiones como cualquier variable.
     * Los operadores aritméticos se pueden aplicar a lo que sea que apunte el puntero .
     * Tenga en cuenta que se requieren paréntesis para que el operador ++ incremente el valor al que se apunta.
     * Lo mismo ocurre cuando se usa el operador -.*//*

    int z = 5;
    int y;
    int *p = NULL;
    p = &z;

    y = *p + 2; */
/* el valor de "z" +2, se asigna 7 a y *//*

    y += *p; */
/* a "y" se le suma el valor del puntero, 5, ahora y = 12 *//*

    *p = y; */
/* a el valor que era el puntero, "5", se le asina el valor de y, el puntero ahora tiene el valor de 12 *//*

    (*p)++; */
/* 12 se incrementa a 13 *//*

     printf ("p apunta a z, pero tiene el valor% d \n", *p);


    return 0;
}*/
