#ifndef __finesADT__h
#define __finesADT__h

#include <stdlib.h>

typedef struct fines {
    size_t totalFines; //Cantidad de veces que aparecio esta infraccion en esta agencia
    size_t id; // ID de la infraccion
} fines;

typedef fines * finesList;

typedef struct agencyMonthData {
    size_t month;
    size_t year;
    size_t totalMonthFines; //Sumatoria de los montos de las multas de este mes
} agencyMonthData;

typedef agencyMonthData * agencyMonthDataList;

typedef struct Agencies {
    char *name; //Nombre de la agencia
    size_t min; //Monto minimo de multa
    size_t max; //Monto maximo de multa
    finesList fines; //Lista de infracciones ordenadas alfabeticamente (usaremos el id de la infraccion para ordenar)
    agencyMonthDataList agencyMonthData; //Lista de datos de cada mes de la agencia
} Agencies;

typedef Agencies * agenciesList;

struct finesCDT {
    agenciesList agencies; //Lista de agencias ordenadas alfabeticamente
};

#endif
