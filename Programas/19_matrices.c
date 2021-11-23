/*
 * Un arreglo bidimensional,  matriz bidimensional, arreglo de arreglos, o simplemente matriz, se puede considerar como una tabla.
 * También puede pensar en una matriz bidimensional como una cuadrícula para representar un tablero de ajedrez,
 * bloques de ciudades y mucho más.
    Una declaración de matriz bidimensional indica el número de filas y el número de columnas.
 * */

#include <stdio.h>

int main(){

    //Delcarar una mateiz
    int a [2][3]; /* Una matriz de 2 x 3 */


    //Inicialziar una matriz
    int b [2][3] = {
           //c1 c2 c3
            {3, 2, 6}, //f1
            {4, 5, 20} //f2
    };

    //Recuerda que empieza a contar desde cero:
    int c [2][3] = {
            //c0 c1 c2
            {3, 2, 6}, //f0
            {4, 5, 20} //f1
    };

    //Para acceder a un elemento de una matriz bidimensional , se requieren tanto el índice de fila como el índice de columna.
    c[1][2] = 19; //cambia el elemento de la fila 1 y columna 2 por 19, es decir 20 ahora es 19!

    //Pero nos topamos con el mismo problema: ¿Como accedemos a un elemento que no sea de forma manual?
    //los bucles for anidados se usan para solucionar este problema
    int k, j;

    /*mostrar el contenido de la matriz */

    for (k = 0; k <2; k ++) {
        for (j = 0; j <3; j ++) {
            printf ("%d", c[k][j]);
        }
        printf ("\n");
    }


    printf("Hola Mundo! :D \n");
    return 0;
}

