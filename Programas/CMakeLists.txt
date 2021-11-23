cmake_minimum_required(VERSION 3.15)
project(C_programs C)

set(CMAKE_C_STANDARD 99)

add_executable(C_programs main.c
        1_holaMundo.c
        2_tipos_de_datos.c
        3_entradas.c
        4_salidas.c
        5_secuencias_escape.c
        6_comentarios.c
        7_operadores_aritmeticos.c
        8_castings.c
        9_variables.c
        10_operadores_asignacion.c
        11_estructuras_de_decision.c
        12_operadores_logicos.c
        13_estructuras_de_eleccion.c
        14_operadores_incremento_decremento.c
        15_estructuras_de_repeticion.c
        16_funciones.c
        17_recursividad.c
        18_arreglos.c
        19_matrices.c
        20_punteros.c
        21_punteros_y_arreglos.c
        22_punteros_funciones.c
        23_cadenas.c
        24_cadenas_y_funciones.c
        25_funciones_puntero.c
        26_puntero_void.c
        27_estructuras.c
        28_estructuras_2.c
        29_punteros_con_estructuras.c
        30_estructuras_como_funciones.c
        31_matriz_estrucutras.c
        32_uniones.c
        33_estrucutras_con_uniones.c
        34_punteros_uniones.c
        35_unions_as_functions_params.c
        36_array_unions.c
        37_memoria_manejo.c
        38_funcion_calloc.c
        39_funcion_realloc.c
        40_memoria_strings.c
        41_memoria_matrices.c
        42_leer_archivos.c
        43_escribir_archivos.c
        44_escribir_archivos_bin.c
        45_leer_registros.c
        46_manejo_excepciones.c
        47_errno.c
        48_edom_errange.c
        49_feof_ferror.c
        50_procesador.c
        51_macros.c
        52_operacion_procesador.c)