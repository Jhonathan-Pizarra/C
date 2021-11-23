#include <stdio.h>
#include <stdlib.h> //acceso a funciones de gestion de memoria

int main() {
    //Operador Sizeof
    int x;
    printf("%i\n", sizeof(x));

    //Memoria en arreglos
    int arr[5];
    printf("%d\n", sizeof(arr));
/* cada entero 4 byts, * 5 espacios = 20*/


    //función malloc, asigna un número específico de bytes contiguos en la memoria
    int *ptr;
    //malloc devuelve un puntero a la memoria asignada.
    ptr = malloc(10*sizeof(*ptr));
/* a block of 10 ints */

    //Observe que sizeof se aplicó a * ptr en lugar de int, esto
    // hace que el código sea más robusto si la declaración * ptr se cambia a un tipo de datos diferente más adelante.
    if (ptr != NULL) {
        *(ptr+2) = 50;
/* assign 50 al tercer int  (el +2 es recorre la posición) */

    }
    printf("3rd elem equals to %d", *(ptr + 2));

    //función free ()
    // es una función de gestión de memoria que se llama para liberar memoria
    free(ptr);

    return 0;
}

