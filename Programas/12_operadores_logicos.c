#include <stdio.h>

int main(){
    //Recuerdas el if anidado?
    /*
     * if(expresion 1)es verdadera, entra aqui
     *  if(expresion 2) es verdadera, entra aqui,
     *      // y más y más profundo
     *
     * Hay una manera más elegante de hacer que una declaracion se cumpla si tanto if:Operadores Lógicos
     */

    int a,b,c;
    a = 2;
    b = 3;
    c = 4;
    if( (a < 5) && (b < 5)){ //Una expresión booleana compuesta se evalúa de izquierda a derecha
        printf("5 mayor que %i y %i", a ,b);
    } else{
        printf("5 es menor que %i y %i ", a ,b);
    }

    //Otros operadores: &&, ||, !=

    return 0;
}

/*
  int x = 3;
  int y = 8;
  if (! (x> 2 || y <0))  si no es verdad que 3 es mayor que 2, o que 8 es menor a cero
    printf ("verdadero");  imprime esto

    ...en pocas, si esto no es verdad, no imprimirá lo de abajo!

  else
    printf ("falso");

*/

/*
 * Operadores Lógicos:
 * && AND
 * || OR
 * ! NOT
*/