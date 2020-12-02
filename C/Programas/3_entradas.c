/*
#include <stdio.h>

int main(){


    //Si vas a probar esto descomentalo, y comenta el otro
    printf("Escribe una letra: ");
    char letra = getchar(); //La función getsChar () se usa para leer la entrada del teclado

    printf("Escribiste la %c",letra);


    //Una cadena se almacena en un Char array, o arreglo de letras, un arreglo de letras forman... ¡Exacto, palabras!
    printf("Ahora escribe una palabra de 4 letras: ");
    char palabra[4];
    gets(palabra); //La función gets () se usa para leer la entrada como una secuencia ordenada de caracteres, también llamada cadena

    printf("Escribiste: %s", palabra); //el %s es el formato de impresion para cadenas

    //Si escribes una palabra de 4 letras: amor, perro, gato, carro, el programa funcionará bien
    //Pero si escribes: oro, cobalto, artieuqopedsmpewetrpero, el programa te va a dar error... deben ser 4 !

    //Nos da molestias porque se pasa sin que podamos escribir la palabra? Mejor usemos scanf !

    int cedula;
    printf("Ingresa tu numero de cédula: ");
    scanf("%i", & cedula); //el "i" es porque es un entero y el "&" es porque scanf hará referencia en memoria donde este la variable cedula
    // scanf () escanea la entrada que coincide con los especificadores (%i, %d, %f, %c, %s)de formato.
    //El signo & antes del nombre de la variable es el operador de dirección . Da la dirección, o ubicación en la memoria, de una variable. Esto es necesario porque scanf coloca un valor de entrada en una dirección variable.


    printf("tu numero de cedula es: %i", cedula);

    //MI PRIMERA SUMA!!
    printf("\n");
    int num1, num2;
    printf("Ingresa 2 numeros: \n");
    scanf("%d %d", & num1, & num2); //Ojo, nunca dejes con espacios los formatos de las comillas, es decir %d ", scanf se confunde con los espacions en blanco

    printf("La suma es: %d", num1+num2);

    return 0;
}

*/
