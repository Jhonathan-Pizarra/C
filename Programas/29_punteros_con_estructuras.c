#include <stdio.h>
//Al igual que los punteros a variables, también se pueden definir punteros a estructuras
struct myStruct *struct_ptr; //define un puntero a la estructura myStruct.
struct_ptr = &struct_var; //almacena la dirección de la variable de estructura struct_var en el puntero struct_ptr
struct_ptr -> struct_mem; //accede al valor del miembro de estructura struct_mem .
//El operador -> permite acceder a los miembros de la estrucutra a través del puntero


// Student Structure Definition
struct student{
    char name[50];
    int number;
    int age;
};

// Struct pointer as a function parameter
void showStudentData(struct student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age);
}

int main(){

    // New Student Record Creation
    struct student st1;
    struct student st2;

    // Filling Student 1 Details
    strcpy(st1.name, "Krishna");
    st1.number = 5;
    st1.age = 21;

    // Filling Student 2 Details
    strcpy(st2.name, "Max");
    st2.number = 9;
    st2.age = 15;

    // Displaying Student 1 Details
    showStudentData(&st1);

    // Displaying Student 2 Details
    showStudentData(&st2);

    //(*st).age is the same as st->age.
    //Además, cuando se ha usado una typedef para nombrar la estructura, entonces se declara un puntero usando solo el nombre typedef junto con * y el nombre del puntero.

    return 0;
}


