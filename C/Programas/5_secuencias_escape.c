// Entrada/Salida o también conocido como E/S

//#include <stdio.h>
//
//int main(){
//
//    //Desde ahora usaremos "scan" para las Entradas, puesto que ofrece una serie de posibilidades de insercion de datos, como:
//    //scanf("%2d %d %*f %5s", &x, &y, z);
//    //digamos que escribimos: x = 1234, y = 123, (el float te explico abajp) y z = "elephant"
//    //Si hacemos una impresión de eso, tendrémos que hacer algo como..
//    //printf("%d  %d  %s", x, y, text);
//    // Y el resultado será: 12 123 eleph
//
//    //¿Qué pasó?
//    // %2d solo toma los 2 primeros dígitos de lo que se ingresa
//    //*f el (*) salta ése argumento
//    // 5s limita la cadena a 5 primeros caracteres
//    // z no necesita ser direccionado o referido puesto que los otros dos ya lo fueron, pero es buena práctica hacerlo: &z
//
//    //----------------------------------------
//
//    //Desde ahora usaremos "printf" para las salidas, ya que este permite incluir "secuencias de escape" para generar caracteres especiales y especificaciones de formato
//    printf ("El árbol tiene %i manzanas. \n", 22);
//    printf("\"Hello World!\"\n");
//
//    //Hace que %i tome el valor de 22
//    //Que las " de Hello se manifiesten al principio y al final
//
//    //Las secuendcias de escape siempre iniciarán con un "\"
//
//    /*
//    \n new line
//    \t horizontal tab
//    \\ backslash
//    \b backspace
//    \' single quote
//    \" double quote
//    */
//
//    return  0;
//}
//
//
