#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
uint32_t vector_MCD(const uint32_t *v, size_t n)
{
    if (v == NULL || n == 0)
        return 0;

    uint32_t min = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (v[i] < min || i == 0)
            min = v[i];
    }
    if (min == 1)
        return 1;

    if (min == 0)
        return 0;

    bool *vet = calloc(min + 1, sizeof(bool));
    uint32_t ris = 0;
    uint32_t tmp = 0;
    size_t k = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (k = 1; k <= min; k++)
        {
            if (v[i] % k != 0)
            {
                vet[k] = true;
            }
        }
    }

    for (size_t i = 1; i < min; i++)
    {
        if (vet[i] == false)
        {
            if (i > tmp)
            {
                ris = i;
                tmp = i;
            }
        }
    }
    free(vet);
    return ris;
}

int main(void)
{
    uint32_t a[] = {1, 2, 3, 4, 5};
    vector_MCD(a, 5);
    return 0;
}