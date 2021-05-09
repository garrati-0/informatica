#include "rapporti.h"

struct rapporto *leggi_rapporti(const char *filename, uint16_t *n)
{
    FILE *f = fopen(filename, "rb");
    if (f == NULL)
        return NULL;

    size_t c = fread(n, sizeof(uint16_t), 1, f); //leggo quanti rapporti sono contenuti nel file

    struct rapporto *a = malloc(*n * sizeof(struct rapporto));//creo un vettore di n struct
    

    for (size_t k = 0; k < *n; k++)//inserisco i valori nelle struct
    {
        uint16_t *i = &a[k].id;
        char *h = &a[k].tipo;
        float *w = &a[k].valore;
        fread(i, sizeof(uint16_t), 1, f);
        fread(h, sizeof(char), 1, f);
        fread(w, sizeof(float), 1, f);
    }
    fclose(f);
    return a;
}