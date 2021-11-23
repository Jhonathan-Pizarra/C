#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI*r*r)
int main() {
    float radius = 2;
    printf("%3.2f\n", PI);
    printf("Area is %5.2f\n", AREA(radius));
    printf("Area with radius + 1: %5.2f\n", AREA(radius+1));
    return 0;
}

/*
 * Antes de la compilación, el preprocesador expande cada identificador de macro. En este caso, cada aparición de PI se reemplaza con 3.14
 * y AREA(arg) se reemplaza con la expresión PI*arg*arg.
 * El código final enviado al compilador ya tendrá los valores constantes en su lugar. ¡No es lo que espebamosar!
*/

/*
 * La solución a esto es encerrar cada parámetro entre paréntesis para obtener el orden correcto de las operaciones.
 * así: #define AREA(r) (PI*(r)*(r))
*/