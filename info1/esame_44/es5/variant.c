#include "variant.h"

void *read_variant(FILE *f, char *type)
{
    if (f == NULL)
        return NULL;

    fread(type, sizeof(char), 1, f);
    if (*type == 'c') //char
    {
        char *carattere = malloc(1 * sizeof(char));
        fread(carattere, sizeof(char), 1, f);
        return carattere;
    }
    if (*type == 's') //short
    {
        short *carattere = malloc(1 * sizeof(short));
        fread(carattere, sizeof(short), 1, f);
        return carattere;
    }
    if (*type == 'i') //int
    {
        int *carattere = malloc(1 * sizeof(int));
        fread(carattere, sizeof(int), 1, f);
        return carattere;
    }
    if (*type == 'l') //long long
    {
        long long *carattere = malloc(1 * sizeof(long long));
        fread(carattere, sizeof(long long), 1, f);
        return carattere;
    }
    if (*type == 'f') //float
    {
        float *carattere = malloc(1 * sizeof(float));
        fread(carattere, sizeof(float), 1, f);
        return carattere;
    }
    if (*type == 'd') //double
    {
        double *carattere = malloc(1 * sizeof(double));
        fread(carattere, sizeof(double), 1, f);
        return carattere;
    }

    return NULL;
}