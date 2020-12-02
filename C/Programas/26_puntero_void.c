#include <stdio.h>

/*
int main(){

    //Un puntero void se utiliza para hacer referencia a cualquier tipo de dirección en la memoria y tiene
    // una declaración que se parece a: void *ptr;
    // El siguiente programa usa el mismo puntero para tres tipos de datos diferentes:
    int x = 33;
    float y = 12.4;
    char c = 'a';
    void *ptr;

    ptr = &x;
    printf (" void ptr apunta a %d \n", *(( int *) ptr)); //void *ptr se reemplaza por *((tipo*)ptr)
    ptr = &y;
    printf (" void ptr apunta a %f \n", *(( float *) ptr));
    ptr = &c;
    printf (" void ptr apunta a %c", *(( char *) ptr));


    //Al eliminar la referencia a un puntero vacío ,
    // primero debe escribir el puntero al tipo de datos apropiado antes de eliminar la referencia con *.

    return 0;
}
*/

/*
//Ejercicio 2
//Los punteros vacíos se utilizan a menudo para declaraciones de funciones.
//El uso de un tipo de retorno void * permite cualquier tipo de retorno.
// }Del mismo modo, los parámetros que son nulos * aceptan cualquier tipo de argumento
//Si desea utilizar los datos pasados ​por el parámetro sin cambiarlos, declare const .
// tienen este aspecto: void* algo (const void*);
//1) Portotipo
void* cuadrado (const void *num);
int main() {
    int x, elevado;
    x = 6;
    elevado = cuadrado(&x);
    printf("%d al cuadrado es %d \n", x, elevado);

    return 0;
}

//2) Definicion
void* cuadrado (const void *num) {
    int result;
    result = (*(int *)num) * (*(int *)num);
    return result;

    //Esta función cuadrado, se ha escrito para multiplicar ints , por lo que el puntero num void se convierte en un int .
    // Si se cambiara la implementación para permitir que square () multiplique los flotantes ,
    // entonces solo es necesario cambiar la definición sin tener que hacer cambios en la declaración.
}
*/

//EJERCICICO 3: Funciones puntero como argumentos (Pendiente)


