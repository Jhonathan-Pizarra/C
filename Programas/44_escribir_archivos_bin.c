//#include <stdio.h>

int main() {
    FILE *fptr;
    int arr[10];
    int x[10];
    int k;

    /* generate array of numbers */
    for (k = 0; k < 10; k++)
        arr[k] = k;

    /* write array to file */
    fptr = fopen("datafile.bin", "wb");
    fwrite(arr, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    /* read array from file */
    fptr = fopen("datafile.bin", "rb");
    fread(x, sizeof(arr[0]), sizeof(arr)/sizeof(arr[0]), fptr);
    fclose(fptr);

    /* print array */
    for (k = 0; k < 10; k++)
        printf("%d", x[k]);
    return 0;
}

/*
 * Este programa escribió una matriz de ints en un archivo, pero una matriz de estructuras podría haberse escrito fácilmente en un archivo.
 * Observe que el tamaño del elemento y el número de elementos se determinaron utilizando el tamaño de un elemento y el tamaño de toda la variable.
 * Las extensiones de archivo por sí solas no determinan el formato de los datos en un archivo, pero son útiles para indicar el tipo de datos que se deben esperar.
 * Por ejemplo, una extensión de .txt indica un archivo de texto, .bin es para datos binarios, .csv indica valores separados por comas y .dat es un archivo de datos.
 */