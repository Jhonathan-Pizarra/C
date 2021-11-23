 //Created by Jhonathan on 11/10/2021.

#include <stdio.h>
int main() {
    FILE *fptr; //you need to declare a pointer of type file. This declaration is needed for communication between the file and the program
    int stock;
    char buffer[200], item[10], c;
    float price;

    fptr = fopen("myfile.txt", "w"); /* write to file */
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);
    fclose(fptr); /* myfile.txt: Inventory\n100 Widget 0.29\nEnd of List */

    fptr = fopen("myfile.txt", "r");
    fgets(buffer, 20, fptr); /* read a line */
    printf("%s\n", buffer);
    fscanf(fptr, "%d%s%f", &stock, item, &price); /* read data */
    printf("%d %s %4.2f\n", stock, item, price);

    while ((c = fgetc(fptr)) != EOF) /* read the rest of the file */
        printf("%c", c);
    fclose(fptr);
    return 0;

}
