#include <stdio.h>
int main(){

    //Hasta ahora hemos visto cadenas de caracteres, pero también podemos combinar que en una impresión se impriman
    //cadenas y otros tipos de datos, esto se le conoce como cadena formateada. Se puede crear una cadena formateada con
    // la función sprintf ().
    char info[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(info, "El %s edificio tiene  %d empelados.", dept, emp); // La función formatea todos los diferentes tipos de datos, los une, y los almacena en una variable "info" (fijate que es la del arreglo)
    printf("%s \n", info); //usamos s porque lo que impirmirá será un string, la cadena ha sido formateada!

    //Otra función útil es sscanf () para escanear una cadena en busca de valores.
    // La función lee valores de una cadena y los almacena en las direcciones de variable correspondientes.
    char detalle[] = "Snoqualmie WA 13190";
    char city[50];
    char state[50];
    int population;
    sscanf(detalle, "%s %s %d", city, state, &population); //detecta el string 1: Snoqualme y lo almacena en ciudad,
                                                            //detecta el string 2: WA y lo almacena en estado
                                                            //al ser de tipo int, lo referenciamos mediante & y es almacenado en population
    printf("%d people live in %s, %s.", population, city, state); //se imprime la cadena formateada,
    return 0;
}


//EJERCICIO 2
/*
#include <string.h>
//La biblioteca de cadenas .h contiene numerosas funciones de cadenas .
//La instrucción #include < string .h> en la parte superior del programa da acceso a lo siguiente:
//strlen (str) Devuelve la longitud de la cadena almacenada en str , sin incluir el carácter NULL .
//strcat (str1, str2) Añade (concatena) str2 al final de str1 y devuelve un puntero a str1 .
//strcpy (str1, str2) Copia str2 a str1. Esta función es útil para asignar un valor nuevo a una cadena .
int main ()
{
    char s1 [] = "El zorro gris";
    char s2 [] = "saltó";

    strcat (s1, s2);
    printf ("%s \n", s1); //ahora s1 tiene un nuevo valor al que apunta, que es la concatencacion de s1 y s2
    printf ("La longitud de s1 es %d \n", strlen (s1));
    strcpy (s1, s2); //s2: saltó, s1: el zorro gis saltó, en este punto
    printf ("s1 ahora es %s \n", s1);//s2 = s1 y eso es igual a saltó

    return 0;
/*Otras funciones:
 *
strncat (str1, str2, n) Agrega (concatena) los primeros n caracteres de str2 al final de str1 y devuelve un puntero a str1.
strncpy (str1, str2, n) Copia los primeros n caracteres de str2 en str1.
strcmp (str1, str2) Devuelve 0 cuando str1 es igual a str2, menor que 0 cuando str1 < str2 y mayor que 0 cuando str1 > str2.
strncmp (str1, str2, n) Devuelve 0 cuando los primeros n caracteres de str1 son iguales a los primeros n caracteres de str2, menor que 0 cuando str1 <str2, y mayor que 0 cuando str1> str2.
strchr (str1, c) Devuelve un puntero a la primera aparición de char c en str1, o NULL si no se encuentra el carácter.
strrchr (str1, c) Busca str1 al revés y devuelve un puntero a la posición del char c en str1, o NULL si no se encuentra el carácter.
strstr (str1, str2) Devuelve un puntero a la primera aparición de str2 en str1, o NULL si no se encuentra str2
 * /
}

*/

/*
//Ejercicio 3: CASTING DE CADENAS A NUMEROS Y VICEVERSA
//En programación en C y se usa a menudo para evitar un error en tiempo de ejecución.
//La biblioteca stdio.h contiene las siguientes funciones para convertir una cadena en un número:

//int atoi (str) Significa ASCII a integer. Convierte str en el valor int equivalente. Se devuelve 0 si el primer carácter no es un número o no se encuentran números.
//double atof (str) Significa que ASCII flota. Convierte str en el valor doble equivalente. Se devuelve 0.0 si el primer carácter no es un número o no se encuentran números.
//long int atol (str) Significa ASCII a long int. Convierte str en el valor entero largo equivalente. Se devuelve 0 si el primer carácter no es un número o no se encuentran números.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[10];
    int num;

    printf("Ingresa un número: ");
    gets(input);
    num = atoi(input); //strtol es la alternativa a atoi para el manejo de errores, hace exactamente lo mismo

    return 0;
}*/
/*

//EJERCICIO 4: CADENAS Y MATRICES
int main()
{
    //Se puede crar una matriz de cadenas, que basicamente srive para almacenar cadenas relacionadas
    char viaje [3] [15] = {
            "maleta",
            "pasaporte",
            "boleto"
    };

    //Sin embargo, el acceso a los elementos es confuso, lo que se recomienda es usar punteros:
    char *viaje2 [] = {
            "maleta",
            "pasaporte",
            "boleto"
    };

    printf ("Por favor traiga lo siguiente: \n");
    for ( int i = 0; i <3; i ++) {
        printf ("%s \n", viaje2[i]);
    }
    //¿Por qué es mejor usarlo así?
    //Debido a que cada elemento puede variar en longitud, la matriz de punteros de cadena tiene una estructura más irregular
    // en lugar de una estructura de cuadrícula bidimensional, es decir, no tenemos que estar asimilando que la cadena más larga tiene 15 caracteres....
    //Con este enfoque, no hay límite para la longitud de la cadena .
    // Y lo que es más importante, se puede hacer referencia a los elementos mediante un puntero al primer carácter de cada cadena,
    //lo que se traduce, en optimizacion de memoria y recursos

    // Ten en cuenta que una declaracion como char *items[3];
    // solo reserva spacio para 3 punteros,
    // las cadenas como tal serán referenciadas a partir de esos punteros, por eso es importante usar bucles


    return 0;
}

*/
