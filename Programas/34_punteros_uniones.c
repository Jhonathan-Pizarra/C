#include <stdio.h>
#include <string.h>
//Un puntero a una unión apunta a la ubicación de memoria asignada a la unión.
union val {
    int int_num;
    float fl_num;
    char str[20];
};

int main() {
    union val info;
    union val *ptr = NULL;//Un puntero de unión se declara utilizando la palabra clave "union" y la etiqueta de unión junto con * y el nombre del puntero.
    ptr = &info;
    ptr->int_num = 10; //Cuando desee acceder a los miembros de la union a través de un puntero, se requiere el operador ->
    //(* ptr).int_num es lo mismo que ptr-> int_num.
    printf("info.int_num is %d", info.int_num);

    return 0;
}