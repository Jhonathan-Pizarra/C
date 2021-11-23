#include <stdio.h>
#include <string.h>

/*
 * Este programa escribió dos registros de elementos en un archivo.
 * Para leer solo el segundo registro, fseek() movió el puntero del archivo a 1*sizeof(item) bytes desde el inicio del archivo.
 * Por ejemplo, si desea mover el puntero al cuarto registro, busque 3 * sizeof(item) desde el principio del archivo (SEEK_SET).
*/

typedef struct {
    int id;
    char name[20];
} item;

int main() {
    FILE *fptr;
    item first, second, secondf;

    /* create records */
    first.id = 10276;
    strcpy(first.name, "Widget");
    second.id = 11786;
    strcpy(second.name, "Gadget");

    /* write records to a file */
    fptr = fopen("info.dat", "wb");
    fwrite(&first, 1, sizeof(first), fptr);
    fwrite(&second, 1, sizeof(second), fptr);
    fclose(fptr);

    /* file contains 2 records of type item */
    fptr = fopen("info.dat", "rb");

    /* seek second record */
    fseek(fptr, 1*sizeof(item), SEEK_SET);
    fread(&secondf, 1, sizeof(item), fptr);
    printf("%d  %s\n", secondf.id, secondf.name);
    fclose(fptr);
    return 0;
}