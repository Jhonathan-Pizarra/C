/*
Funciones:
son fundamentales para la programación en C
se utilizan para lograr una solución de programa como una serie de subtareas.
es un bloque de código que realiza una tarea específica
es reutilizable
hace que un programa sea más fácil de probar
se puede modificar sin cambiar el programa de llamada
 */

//Para hacer funciones debemos
/*
#include <stdio.h>

//1) Prototipo de la función:
int cuadrado (int num);
//Tipo de la función: int
//Parámetros num de tipo int
//Nuestra función devuelve un número entero y toma un parámetro de tipo int
//Una función puede tomar varios parámetros; en ese caso, deben estar separados por comas.
int main(){

    int x, resultado; //En este caso almacenamos la funcion en una variable,
                    // esto es posible para cualquier funcion que no sea de tipo void, y siempre y cuando el tipo de dato de la variable
                    // conicida con el tipo de dato de retorno de la funcion

    x = 5;
    resultado = cuadrado (x); //3) Invocar
    printf ("%i al cuadrado es %i \n", x, resultado);
    return 0;
}

//2) Definir la función: Basicamente es copiar el prototipo
//La función cuadrado calcula y devuelve el cuadrado de su parámetro.
int cuadrado (int num) {
    int y;
    y = num * num;

    return (y); // "retorno" se utiliza para enviar un valor resultante de todo este proceso de funcion, cuando esta sea llamada
}
*/


/*Los parámetros de una función se utilizan para recibir valores requeridos por la función
Los valores se pasan a estos parámetros como argumentos a través de la llamada a la función.
De forma predeterminada, los argumentos se pasan por valor,
lo que significa que se proporciona una "copia de los datos" a los parámetros de la función llamada.
La variable real no se pasa a la función, por lo que no cambiará, "no es un paso por referencia"


Cuando los argumentos se pasan a los parámetros de la función, los parámetros actúan como variables locales.
Al salir de una función, los parámetros y las variables locales de la función se destruyen
  */