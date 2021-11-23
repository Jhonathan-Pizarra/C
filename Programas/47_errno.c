#include <stdio.h>
#include <stdlib.h>

extern int errno;

int main() {
    FILE *fptr;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if (fptr == NULL) {
        fprintf(stderr, "Error opening file. Error code: %d\n", errno);
        //perror("Error");
        //fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    fclose(fptr);
    return 0;
}

/*
 *
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main() {
    for (int x = 0; x < 135; x++)
      fprintf(stderr, "%d: %s\n", x, strerror(x));
}
 */