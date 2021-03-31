#include "stdlib.h"

int *clamped(const int *v, size_t n, int min, int max)
{
    if (v == NULL || n == 0 || min > max)
    {
        return NULL;
    }
    int *arr = calloc(n, sizeof(int));

    for (size_t i = 0; i < n; i++)
    {
        if (v[i] < min)
        {
            arr[i] = min;
            continue;
        }
        if (v[i] > max)
        {
            arr[i] = max;
            continue;
        }

        arr[i] = v[i];
    }

    return arr;
}

int main(void)
{
    int vet[10] = {1, -2, 32, 4, 5, 67, -4, 8, 9};
    size_t n = 10;
    int min = 1;
    int max = 9;
    clamped(vet, n, min, max);
    return 0;
}