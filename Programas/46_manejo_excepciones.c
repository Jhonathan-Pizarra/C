#include <stdio.h>
#include <stdlib.h>
int main() {
    int x = 10;
    int y = 0;

    if (y != 0)
        printf("x / y = %d", x/y);
    else {
        printf("Divisor is 0. Program exiting.");
        exit(EXIT_FAILURE); //Proces finisjed with exit code 1 (Por default se pone ese, pero pude haberle mandado cualqueir otro numero)
    }

    return 0;
}