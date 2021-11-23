//Una matriz puede almacenar elementos de cualquier tipo de datos, incluidas estructuras.
//Después de declarar una matriz de estructuras, se puede acceder a un elemento con el número de índice.
//El operador de punto se utiliza para acceder a los miembros del elemento, como en el programa:
//Las matrices de estructuras se utilizan para estructuras de datos como listas enlazadas, árboles binarios y más.

#include <stdio.h>
typedef struct {
    int h;
    int w;
    int l;
} box;
int main() {
    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int k, volume;

    for (k = 0; k < 3; k++) {
        volume = boxes[k].h*boxes[k].w*boxes[k].l;
        printf("box %d volume %d\n", k, volume);
    }
    return 0;
}
