#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void stampa_a(uint8_t n)
{
    if (n == 0)
        return;

    size_t c = n;
    size_t g = 2;
    for (size_t i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (size_t s = 0; s < c-1; s++)
            {
                printf(" ");
            }
            c--;
            printf("/");
            printf("\\\n");
            continue;
        }



        for (size_t s = 0; s < c-1; s++)
        {
            printf(" ");
        }

        c--;
        printf("/");

        if (n / 2== i)
        {
            for (size_t k = 0; k < g; k++)
            {
                printf("-");
            }
        }
        else
        {
            for (size_t k = 0; k < g; k++)
            {
                printf(" ");
            }
        }
        g = g + 2;
        printf("\\\n");
    }
}

int main(void)
{
    stampa_a(10);
    return 0;
}