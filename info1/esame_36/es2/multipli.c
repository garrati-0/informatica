#include "stdlib.h"

int *rimuovi_multipli(const int *v, size_t size, size_t *newsize)
{
    int *new = calloc(size,sizeof(int));
    size_t a = 0;
    for (size_t i = 0; i < size; i++)
    {
        for (size_t k = 0; k < size; k++)
        {
            if ((v[k] % v[i]) == 0 && i != k)
            {
                if (v[i] != new[a-1])
                {
                    new[a] = v[i];
                    a++;
                }
            }
        }
    }
    new = realloc(new, a* sizeof(int));
    newsize = &a;
    return new;
}

int main(void)
{
    int vet[] = {10, 9, 8, 7, 6, 5, 4, 3, 2};
    rimuovi_multipli(vet, 9, NULL);
    return 0;
}