#include <stdio.h>

//Hasta ahora hemos visto en funciones paso por valor, pero si usamos punteros y funciones, tenemos paso por referencias
//Es decir que funciones pueden alterar los datos reales en lugar de una "copia" de los datos.

void intercambio (int *num1, int *num2);

int main() {
    int x = 25;
    int y = 100;

    printf("x es %d, y es %d \n", x, y); // 25 y 100
    intercambio(&x, &y); //Les pasamos las direcciones, la referencia!
    printf("x es %d, y es %d \n", x, y); //100 y 25

    return 0;
}

void intercambio (int *num1, int *num2) { //como están con el puntero, accederán al valor de esa referencia
    int temp; //esta variable necesito para hacer el cambio
    temp = *num1; // temp = 25
    *num1 = *num2; // 25 = 100
    *num2 = temp; // 100 = temp
}

//Una matriz no se puede pasar por valor a una función.
// Sin embargo, hacerlo por referencia es posible gracias a los puteros

/*
int suma ( int *a , int num_elements); //mandamos el valor de a[0], o sea 100, es decir "mandamos 100 o a[0]"
                                        //recuerda que no es posible mandar a[0] en una funcion, debemos usar punteros
int main () {
    int arreglo [5] = {100, 220, 30, 10, 100};
    printf ("El total de suma es %d \n", suma(arreglo, 5));

    return 0;
}

int suma ( int *a , int num_elements) { //Aqui lo que hago es referenciar a la pociion 0 del arreglo, aqui recibo un valor, no una direccion!!!
    int total = 0;
    int k;

    for(k = 0; k <num_elements; k ++) {
        total += a[k]; //y aqui simplemente es como que tuviera mi arreglo dentro de esta funcion suma, itero sobre sus elementos
    }

    return  total;
}
*/

//Así como se puede pasar graicas a los punteros, una referencia de matriz a una función,
// se puede obtener un puntero de una matriz
/*
int *soloPares(); // se declara un puntero , no una matriz , para almacenar el valor devuelto por la función

int main() {
    int *a;
    int k;

    a = soloPares(); */
/* obtenemos los 5 numeros pares que retornó la función*//*

    for (k = 0; k < 5; k++){ //en la pocion 0 está ya num[0] o sea 2, luego 4, 6, 8, 10
        printf("%d \n", a[k]); //recuerda que, a[k] es lo mismo que *(a + k) .
    }


    return 0;
}

//se declara un puntero , no una matriz , para almacenar el valor devuelto por la función
int *soloPares() {
    static int nums[5]; //Cuando se pasa una variable local de una función, debe declararla como estática en la función.
    int k;
    int par = 0;

    for (k = 0; k < 5; k++) {
        nums[k] = (par = par+2); //0+2 = 2, se almacena en num[0]
    }

    return nums; //retornará 2,4,6,8,10 en arreglo
}*/
