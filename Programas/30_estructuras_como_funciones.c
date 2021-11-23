#include <stdio.h>
#include <string.h>

//Una función puede tener parámetros de estructura que acepten argumentos por valor
//todo lo que se necesita es una copia de la variable de estructura.
//Para que una función cambie los valores reales en una variable de estructura, se requieren parámetros de puntero

typedef struct {
    int id;
    char title[40];
    float hours;
} course;

void update_course(course *class);
void display_course(course class);

int main() {
    course cs2;
    update_course(&cs2);
    display_course(cs2);
    return 0;
}

void update_course(course *class) {
    strcpy(class->title, "C Fundamentals");
    class->id = 111;
    class->hours = 12.30;
}

void display_course(course class) {
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}

//Como puede ver, update_course () toma un puntero como parámetro,
// mientras que display_course () toma la estructura por valor.
