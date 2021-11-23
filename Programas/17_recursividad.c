/*
Una función recursiva es aquella que se llama a sí misma e incluye un caso base o condición de salida, para finalizar las llamadas recursivas.
La recursividad funciona "apilando" llamadas hasta que se ejecuta el caso base.
Las llamadas se completan de la más nueva a la más antigua
*/

#include <stdio.h>

 void saluda(int nveces);

int main() {

    saluda(3);

    return 0;
}

void saluda(int nveces) {

    for (int i = 0; i < nveces; i++)
        printf("Hello\n");

}

/*
 Cuando se alcanza el caso base, el valor de retorno 1 activa la finalización del llamadas apiladas.
 Los valores devueltos del más nuevo al más antiguo crean los siguientes cálculos, y el cálculo final (5 * 24)
    2 * 1
    3 * 2
    4 * 6
    5 * 24
 Una recursiva requiere un caso base para evitar un bucle infinito.
*/






