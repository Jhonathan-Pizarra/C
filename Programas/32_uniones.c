#include <stdio.h>

//Declaramos la union
union val {
    int int_num;
    float fl_num;
    char str[20];
}; //fijate en el ";"

int main() {
    union val test; //variable de union
    test.int_num = 42; //acedemos al miembro
    printf("%d\n", test.int_num);

    union val u1;
    union val u2;
    u1.int_num = 42;
    u2 = u1; //Asignar una variable de union a otra del mismo tipo
    printf("%d\n", u2.int_num);

    //Puede acceder a los miembros de una variable de unión utilizando "." entre el nombre de la variable y el nombre del miembro.
    //Cuando se realiza la asignación, la ubicación de la memoria de la unión se utilizará para ese miembro hasta que se realice otra asignación de miembro.
    // Intentar acceder a un miembro que no ocupa la ubicación de la memoria da resultados inesperados.
    union val test2;

    test2.int_num = 123;
    test2.fl_num = 98.76;
    strcpy(test2.str, "hello"); //esta última asignación anula las asignaciones anteriores, por lo que str almacena un valor y el acceso a int_num y fl_num no tiene sentido.

    printf("%d\n", test2.int_num); //1819043176
    printf("%f\n", test2.fl_num); // 1143141481298415.00
    printf("%s\n", test2.str); //: hello

    return 0;
}

