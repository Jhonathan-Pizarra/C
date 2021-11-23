#include <stdio.h>

int main(){
    //Los punteros son especialmente útiles con matrices.
    // Con punteros, podemos apuntar al primer elemento y luego usar la aritmética de direcciones para recorrer la matriz :
    //+ se usa para avanzar a una ubicación de memoria
    //- se usa para retroceder a una ubicación de memoria

    int a [5] = {2, 3, 4, 5, 6};
    int *ptro = NULL;
    int i;

    ptro = a; //es como escribir: ptro = &a[0]. Apunta al primer elmento por default

    for(i=0; i < 5; i ++) {
        printf ("%i", *(ptro + i)); //*puntero, estoy imprimiendo el valor del puntero, + i(que lo desplaza i pociiones)
    }
    printf("\n");
    printf("%d", *a); //*a = *ptro = valor al que apunta ptro, es deicr &a[0], es decir 2
    printf("%d", *(a+1));
    printf("%d", *a+10);//2+10 = 12

    return 0;
}


/*
int main(){
    //Además de usar + y - para referirse a las ubicaciones de memoria anterior y siguiente,
    //puede usar los operadores de asignación para cambiar la dirección que contiene el puntero .
    //También puede utilizar los operadores ==, <y> para comparar direcciones de puntero .
    int a [5] = {22, 33, 44, 55, 66};
    int *ptro = NULL;

    ptro = a; */
/* apuntar al primer elemento de la matriz *//*


    printf ("%d %x \n", *ptro, ptro); */
/* 22, h345400ff *//*

    ptro++; // Es decir, ,la dirección de memoria aumenta según el número de bytes a los que se apunta
    printf ("%d %x \n", *ptro, ptro); */
/* 33,  h345420ff *//*

    ptro += 3; //Se desplaza 3 pociiones adelante desde donde estaba:
    printf ("%d %x \n", *ptro, ptro); */
/* 66,  h345400fe *//*

    ptro --;
    printf ("%d %x \n", *ptro, ptro); */
/* 55 *//*

    ptro -= 2;
    printf ("%d %x \n", *ptro, ptro); */
/* 33 *//*


    return 0;
}
*/

