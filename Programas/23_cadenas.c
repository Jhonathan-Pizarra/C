#include <stdio.h>

int main(){

    //Una cadena en C es un arreglo de caracteres que termina con un carácter NULL '\ 0' .
    //declarar una cadena:
    char cadena[6] = "string";

    //¿Que pasaba si le daba cadena[9] = "string" o cadena[1] = "string"?
    //Se debe declarar que el tamaño del arreglo sea ​al menos un carácter más largo que la longitud de cadena esperada.
    // Si la declaración no incluye un tamaño, se calcula en base a la longitud de la cadena en la inicialización más uno para '\ 0':
    char cadena2[] = "mundo"; /* tamaño 6, si 6*/


    //Tambien podemos declarar una cadena de caracteres así
    char str3 [6] = {'h', 'e', 'l', 'l', 'o', '\ 0'}; //Si usamos este modo debemos asegurarnos de usar \0 como último caracter


    //Una cadena es un texto que va entre comillas dobles
    //Un caracter, como 'b', va entre comillas simples, y no puede ser tratado como string


    //ENTRADAS DE CADENAS
    //Para recuperar una línea de texto u otra cadena del usuario, C proporciona las funciones scanf (), gets () y fgets ().
    //Puede usar scanf () para leer la entrada de acuerdo con los especificadores de formato.
    char nombre [25];
    int age;
    printf ("Ingresa tu nombre y edad: \n");
    scanf ("%s %d", nombre, &age);

    //Cuando se usa scanf () para leer una cadena , no es necesario & para acceder a la dirección de la variable

    printf ("Ingresa tu nombre y edad otra vez: \n");
    scanf ("%s %d", nombre, age);
    //scanf () deja de leer la entrada cuando alcanza un espacio.
    // Para leer una cadena con espacios, use la función gets () .
    // gets() lee la entrada hasta que se alcanza una nueva línea (se presiona la tecla Enter).

    char nombre_completo[50];
    printf("Enter your full name: ");
    gets(nombre_completo);

    //Una alternativa más segura a gets () es fgets () , que lee hasta un número específico de caracteres.
    // Este enfoque ayuda a prevenir un desbordamiento del búfer , que basicamente ocurre
    // cuando el bufer no es lo suficientemente grande para el texto escrito. Por ejemplo:

    char full_name [50];
    printf ("Ingrese su nombre completo (50 caracteres):");
    fgets (nombre_completo, 50, stdin);

    //  Los argumentos fgets () son: el nombre de la cadena , el número de caracteres para leer y un puntero al lugar desde donde desea leer la cadena .
    //  stdin significa leer desde la entrada estándar , que es el teclado.
    //  Otra diferencia entre gets y fgets es que fgets almacena el carácter de nueva línea .
    // Ten en cuenta que fgets () lee solo n-1 caracteres de stdin porque debe haber espacio para ' \ 0 '

    //SALIDAS DE CADENAS
    //Al igual que tenemos gets, fgets, scanf, para las entradas, tenemos puts, fputs, prinf para las salidas o impresiones
    //Los fputs () requiere el nombre de la cadena y un puntero al que desea imprimir la cadena . Para imprimir en la pantalla, u

    char city[40];
    printf("Enter your favorite city: ");
    gets(city);
    // Nota: para un uso más seguro:
    // fgets(city, 40, stdin);

    fputs(city, stdout);  // stdout que se refiere a la salida estándar .
    printf(" is a fun city.");

    //La función put () toma solo un argumento de cadena y también se puede usar para mostrar la salida.
    // Sin embargo, agrega una nueva línea a la salida.
    char ciudad[40];
    printf("Enter your favorite city: ");
    gets(ciudad);

    puts(ciudad);

    return 0;
}


/*Podemos ustilizar cadenas con sus librerias:
 *  No olvide incluir < string .h>.
 *  strlen () - obtiene la longitud de una cadena
 *  strcat () - fusiona dos cadenas
 *  strcpy () - copia una cadena en otra
 *  strlwr () - convierte una cadena en minúsculas
 *  strupr () - convierte una cadena en mayúsculas
 *  strrev () - invierte la cadena
 *  strcmp () - compara dos cadenas*/