/*ALCANCE de una variable
 * El alcance variable se refiere a la visibilidad de las variables dentro de un programa.
 * Las variables declaradas en una función son locales a ese bloque de código y no se puede hacer referencia a ellas fuera de la función.
 * Las variables declaradas fuera de todas las funciones son globales para todo el programa
 *  las constantes declaradas con un #define en la parte superior de un programa son visibles para todo el programa.
 */
#include <stdio.h>

int global1 = 0; //Deben inicializarse antes de usarlos para evitar resultados inesperados, debido a que se pueden cambiar en cualquier lugar de un programa,

int main () {
    int local1, local2;
    local1 = 5;
    local2 = 10;
    global1 = local1 + local2;

    printf ("% d \ n", global1);

    return 0;

}

    //VARIABLES STÁTICAS
    // * Las variables estáticas tienen un alcance local pero no se destruyen cuando se sale de una función.
    // * Por lo tanto, una variable estática conserva su valor durante la vida útil del programa
    // * y se puede acceder a ella cada vez que se vuelve a ingresar la función.
    // * Una variable estática se inicializa cuando se declara y requiere el prefijo static .
    // * Ejemplo:
/*
   #include <stdio.h>

    void say_hello ();
    int main () {
        int i;

        for (i = 0; i <5; i ++) {
            say_hello (); // Hola numero: 1
        }

        return 0;
    }

    void say_hello () {
        static int num_calls = 1;

        printf ("Hola número% d \ n", num_calls);
        num_calls ++;

    }
*/
