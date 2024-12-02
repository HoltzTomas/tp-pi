
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>

#include "main.h"

int main(int argc, char *argv[])
{

    int res = 0;
    errno = 0;

    // Chequeamos estar recibiendo los dos archivos de entrada
    if (argc != 3)
    {
        fprintf(stderr, "Uso correcto: %s <archivo multas> <archivo infracciones>\nImportante: respetar orden de los archivos.\n", argv[0]);
        return ERROR;
    }

    // Primera parte: Leo argv[2], el cual será el archivo csv donde guardo
    // infracciones con su respectivo id Formarto: id;descripcion
    FILE *fileInfr = fopen(argv[2], "r");
    if (fileInfr == NULL)
    {
        openFileError(argv[2]);
        return ERROR;
    }

    // Ya sabemos que el archivo existe, ahora leemos linea por linea
    // TODO: Leer de a bloques
    //* Si esta vacio, liberar el adt y terminar el programa con ERROR
    //* Tmb chequear si fallo la carga de datos (errno == ENOMEM)

    // Una vez terminamos todo lo que teniamos que hacer con el archivo lo cerramos para liberar recursos
    fclose(fileInfr);

    // Ahora repetimos lo anterior pero con argv[1]
    // TODO: Leer de a bloques
    //* Si esta vacio, liberar el adt y terminar el programa con ERROR
    //* Tmb chequear si fallo la carga de datos (errno == ENOMEM)

    // TODO: Chequear si podemos modularizar el codigo de lectura de archivos +  manejo de errores

    // Ejecutamos la primer query
    // * res = query1(fines);
    // * if (!res)
    // * {
    // *     createFileError("./query1.csv");
    // *     freeFines(fines);
    // *     return ERROR;
    // * }

    // Misma estructura para el resto de las queries

    //TODO: Liberar memoria

    return 0;
}