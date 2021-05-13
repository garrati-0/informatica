#include <stdlib.h>

int *prodotto(const int *v, size_t n)
{
    if (v == NULL)
        return NULL;

    int *new = calloc(n, sizeof(int));
    int ris = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = 0; k < n; k++)
        {
            if (k != i)
            {
                ris = ris * v[k];
                new[i] = ris;
            }
        }

        ris = 1;
    }

    return new;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    prodotto(a, 5);
    return 0;
}