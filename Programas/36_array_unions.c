#include <stdio.h>
//Una matriz es una estructura de datos que almacena valores de colección que son todos del mismo tipo .
//Una arreglo puede almacenar elementos de cualquier tipo de datos, incluidas las uniones .
union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main() {
    //Con las uniones, es importante tener en cuenta que solo un miembro de la unión puede almacenar datos para cada elemento de la matriz.
    union val nums[10];
    int k;

    //Después de declarar una matriz de uniones, se puede acceder a un elemento con el número de índice

/* create an array of ints */

    for (k = 0; k < 10; k++) {
        nums[k].int_num = k; // El "." punto se utiliza para acceder a los miembros de la union,
    }


/* display array values */

    for (k = 0; k < 10; k++) {
        printf("%d  ", nums[k].int_num);
    }

    return 0;
}


//Las matrices de uniones permiten almacenar valores de diferentes tipos

//union type {
//    int i_val;
//    float f_val;
//    char ch_val;
//};
//
//int main() {
//    union type arr[3];
//    arr[0].i_val = 42;
//    arr[1].f_val = 3.14;
//    arr[2].ch_val = 'x';
//    printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);
//
//    return 0;
//}*/
