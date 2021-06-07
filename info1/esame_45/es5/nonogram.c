#include "nonogram.h"

bool nonogram_load(struct nonogram *ng, const char *filename)
{
    if (ng == NULL || filename == NULL)
        return false;

    FILE *f = fopen(filename, "r");
    if (f == NULL)
        return false;

    int c = 0;
    fscanf(f, "%d", &c);
    ng->n = (c * c) + c;
    ng->schema = calloc(ng->n, sizeof(char));
    fscanf(f, "%c", &ng->schema[0]);

    for (size_t i = 0; i < ng->n; i++)
    {

        fscanf(f, "%c", &ng->schema[i]);
       // printf("%c", ng->schema[i]);
    }
    fclose(f);
    return true;
}