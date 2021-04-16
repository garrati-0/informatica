#include "stdlib.h"

int *rimuovi_multipli(const int *v, size_t size, size_t *newsize)
{
    if (v == NULL)
        return NULL;

    int *new = calloc(size, sizeof(int));
    size_t a = 0;
    size_t b = 0;

    for (size_t i = 0; i < size; i++)
    {
        for (size_t k = 0; k < size; k++)
        {
            if ((v[i] % v[k]) == 0 && i != k)
            {

                break;
            }
            b++;
        }
        if (b == size)
        {
            new[a] = v[i];
            a++;
        }
        b = 0;
    }
    new = realloc(new, a * sizeof(int));
    *newsize = a;
    return new;
}

int main(void)
{
    int vet[] = {3, 4, 5, 6, 7, 8, 9, 10};
    size_t *l = malloc(1 * sizeof(size_t));
    rimuovi_multipli(vet, 8, l);
    return 0;
}