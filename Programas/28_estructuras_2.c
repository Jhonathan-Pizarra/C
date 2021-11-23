#include <stdio.h>
//Los miembros de una estructura pueden también ser una estructura

typedef struct {
    int x;
    int y;
} point;

typedef struct {
    float radius;
    point center;
} circle;

int main(){
    //Las llaves anidadas se utilizan para inicializar miembros que son estructuras.
    // El operador de punto se usa dos veces para acceder a miembros de miembros, como en las declaraciones:
    circle c = {4.5, {1,3}};
    printf{"%3.1f %d, %d",c.radius, c.center.x, c.center.y};


    return 0;
}
