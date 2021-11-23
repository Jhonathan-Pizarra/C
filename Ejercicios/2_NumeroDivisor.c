//Diseñe un programa que,
//Dados dos números enteros que entran como datos, indique si uno es divisor del otro.
#include <stdio.h>

int main(){

    int a;
    int b;

    printf("Hola, ingresa 2 números: \n");
    scanf("%i %i", & a, & b);

    if((a%b) == 0){ //Si 4/2 da como resto 0, 2 es divior de 4.
        printf("%i es divisor de %i", b, a);
    } else{ //... si 2/4 da como resto 0,algo... 4 no es divisor de 2
        printf("%i no es divisor de %i ", b , a);
    }

    return 0;
}