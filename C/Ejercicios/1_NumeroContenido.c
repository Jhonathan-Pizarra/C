//Diseñe un programa que,
// Dado un número real que entra como dato, nos indique si está contenido dentro de los límites predeterminados.
// El límite inferior es de 20 y el superior de 100
/*
#include <stdio.h>

int main(){

    int inferior = 20;
    int superior = 100;
    double numero;
    printf("Ingresa un número: ");
    scanf("%lf", & numero);
    printf("Has ingresado el numero: %lf", numero);
    printf("\n");

    if(numero >= inferior && numero <= superior){
        printf("%lf está dentro de %i y %i", numero, inferior, superior);
    } else{
        printf("%lf no está dentro de %i y %i.", numero, inferior, superior);
    }

    return 0;
}
*/

/*Retroalimentación: */
//lf es el identificador que se usa para variables de tipo "double". En este caso si "numero" fuera un entero deberiamos cambiar "lf" por "i"
//El signo & antes del nombre de la variable es el operador de dirección . Da la dirección, o ubicación en la memoria, de una variable. Esto es necesario porque scanf coloca un valor de entrada en una dirección variable.
// scanf () escanea la entrada que coincide con los especificadores (%i, %lf, %f, %c, %s)de formato (entero, flotante, decimal, caracter y cadena)
//Ojo, nunca dejes con espacios los formatos de las comillas, es decir %d ", scanf se confunde con los espacions en blanco
