#include <stdio.h>
#include <string.h>

//Una función puede tener parámetros de unión que acepten argumentos por valor cuando una copia de la variable de unión es todo lo que se necesita.
union id {
    int id_num;
    char name[20];
};

// Para que una función cambie el valor real en una ubicación de memoria de unión, usamos punteros como parametros
void set_id (union id *item);
void show_id (union id item);

int main() {
    union id item;

    set_id(&item);
    show_id(item);

    return 0;
}

void set_id(union id *item) {
    item->id_num = 42;
}

void show_id(union id item) {
    printf("ID is %d", item.id_num);
}
