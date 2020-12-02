/*
Una matriz es una estructura que almacena una colección de valores que son todos del mismo tipo.
Las matrices son útiles porque pueden representar datos relacionados con un nombre descriptivo en lugar de usar varias variables
Por ejemplo, la matriz scores [25] puede contener 25 puntuaciones.
Una declaración de matriz incluye el tipo de valores que almacena, un identificador y corchetes [] con un número que indica el tamaño
 int matriz [50];

*/

/*
#include <stdio.h>

int main(){

    //Declarar una matriz
    int test_scores[25]; */
/* An array size 25 *//*


    //También puede inicializar una matriz cuando se declara:
    float flotantes [5] = {3.2, 6.55, 10.49, 1.25, 0.99}; //Los contenidos de una matriz se denominan elementos
    // y cada elemento es accesible mediante un número de índice. En C, los números de índice comienzan en 0
    // Para acceder a un elemento de matriz , consulte su número de índice.

    //Tambien podemos inciiarla parcialemtne:
    float prices[5] = {3.2, 6.55}; //los 2 primeros elementos están definidos, pero los 3 restantes por def toman el valor de 0
    //El valor de un elemento de la matriz se puede cambiar mediante una declaración de asignación
    prices[0] = 3.4;


    //Podemos acceder a un indice de manera manual, pero es mejor usar bucles
    int numeros [3] = {10, 14, 90};
    int total = 0;
    int k;

    for (k = 0; k <3; k ++) {
        total += numeros[k]; //De esa manera recorro por todos los elementos de mi matriz: en este caso los suma, total = 114
    }

    return 0;
}
*/
