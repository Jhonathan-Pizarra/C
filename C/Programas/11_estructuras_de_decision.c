/*
#include <stdio.h>

int main(){

    printf("Operadores Relacionales \n");
    //< menor que
    //<= menor o igual que
    //> mayor que
    //> = mayor o igual que
    //== igual a
    //! = No igual a
    // = asignación

    printf("Condicionales! \n");
    int a, b;
    a = 1;
    b = 2;

    if(a < b){
        printf("2 es mayor que 1");
    }
    printf("\n");

        //Ejercicio #2
    int tres = 3;
    int cuatro = 4;
    int cinco = 5;

    if (tres > cuatro){
        printf("%i es mayor que %i", tres, cuatro);
    }

    if (cuatro > cinco){
        printf("%i es mayor que %i", cuatro, cinco);
    }

    if (cinco > tres){
        printf("%i es mayor que %i", cinco, tres);
    }
    printf("\n");

    //Ejercicio #3
    int seis = 6;
    int siete = 7;
    int ocho = 8;

    if (seis > siete){
        printf("Algo anda mal...");
    } else if (siete > ocho){
        printf("Y voló con su rasho laaser...");
    } else if (ocho > seis){
        printf("Este si es el bueno! :D");
    }
    printf("\n");

    //Una expresión que se evalúa como un valor distinto de cero se considera verdadera.
    int in_stock = -1; //si le cambio a "0" el if no se cumple no me va a mostrar el mensaje, 0 es F, todo lo demás es verdaero
    if (in_stock)
        printf ("Pedido recibido.");

    printf("\n");

    //Pero por qué no me va a mostrar? Porque estas evaluando una falseada...Ya pero, y si quiero evaluar cuando el valor de verdad sea falso?
    printf("If-Else"); //nos ayudará a evaluar justamente eso

    char c, d;
    c = 'C';
    d = 'D';
    if( c == d){
        printf("C y D son lo mismo!");
    } else{
        printf("C y D no son lo mismo!");
    }

    printf("\n");

    //Otra forma de escribir, (valido solo para cuando se quieran asignar valores a una variable) todo eso es:
    int e, f;
    f = 4;

    e = (f > 4) ? 3:5; // para e: si f es mayor a 4 a e asignale 3, de lo contrario, asignale el valor de 5 (6, f, lo que quieras)
    printf("el valor de \'e\' es: %i", e);

    printf("\n");
    printf("IF-Else Anidados \n");
    int num1, num2, num3;
    num1 = 3;
    num2 = 2;
    num3 = 1;

    if(num1 > num2){//Se evalua aqui, si es verdad pasa
        if(num1 > num3){//aca, y se vuelve a evaluar, si es verdad pasa
            printf("%i es el mayor de todos! \n", num1); //aca, sino, en algun lugar sea este o el otro else se cumplirá su valor de verdad
        }else{
            printf("%i es menor que %i , pero mayor que %i \n", num1, num3, num2);
        }
    }else{
        printf("%i es el menor de todos \n");
    }

    //Se pueden tener miles de anidaciones en las que s eharán comparaciones, pero, si son más de 2, tendremos que hacer un else if!
    printf("\n");
    printf("IF-Else_if \n");
    int w, x, y, z;
    z = 3;
    y = 2;
    x = 1;
    w = -1;

    if(x > w){//Se evalua aqui, si es verdad pasa
        if(z > x){//aca, y se vuelve a evaluar, si es verdad pasa
            printf("%i es el mayor de todos! \n", z); //aca, sino, en algun lugar sea este o el otro else se cumplirá su valor de verdad
        }else if (y < x){
            printf("%i es el menor de todos\n", w);
        }else if (w == -1){ //AQUI me soltó un error, esto es verdad, entonces porque no se imprimió???????
            //Lo que pasa es que este lenguaje de programacion es secuencial, por lo que una vez que se evalue una expresion verdadera las demas mueren
            //Si quisieramos que se evalue, tendríamos que darle un orden al código...¡POR ESO ESTAMOS HACIENDO LA ANIDACIÓN!
            printf("%i el valor de w es, \n", w);
        }
    }else{
        printf("%i es el menor de todos \n", z);
    }

    return 0;
}

 */