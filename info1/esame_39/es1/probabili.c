#include <stdlib.h>
#include <stdint.h>

double *probabilita(const uint32_t *v, size_t n)
{
    if (v == NULL || n == 0)
        return NULL;

    double *new = calloc(n, sizeof(double));
    double sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        for (size_t k = 0; k < n; k++)
        {
            //if (k != i)
                sum = v[k] + sum;
        }

        new[i] = v[i] / sum;
        sum=0;
    }

    return new;
}

int main(void)
{
    uint32_t vect[] = {1, 2, 3, 4, 5};
    size_t n = 5;
    probabilita(vect, n);
    return 0;
}