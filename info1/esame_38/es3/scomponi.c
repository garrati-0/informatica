#include <stdio.h>
#include <stdlib.h>

void stampa_scomposizione(unsigned int n)
{
    if (n == 0)
        printf("0");

    if (n == 1)
        printf("1");

    size_t k = 0;
    unsigned int *coeff = malloc(k * sizeof(unsigned int));
    for (int i = 2; n != 1; i++)
    {
        if (n % i == 0)
        {
            k++;
            coeff = realloc(coeff, k * sizeof(unsigned int));
            n = n / i;
            coeff[k - 1] = i;
            // printf("%d",i);
            i = 1;
        }
    }

    int count = 0;
    for (int y = 0; y < k; y++)
    {
        if (coeff[y] == coeff[y + 1])
        {
            while (coeff[y] == coeff[y + 1])
            {
                y++;
                count++;
            }

            printf("%i^", coeff[y - count]);
            count++;
            if (y == k - 1)
            {
                printf("%d\n", count);
            }
            else
            {
                printf("%d * ", count);
            }
            count = 1;
        }
        else
        {
            if (y == k - 1)
            {
                printf("%i\n", coeff[y]);
            }
            else
            {
                printf("%i * ", coeff[y]);
            }
        }
    }
}

int main(void)
{
    stampa_scomposizione(120);
    return 0;
}