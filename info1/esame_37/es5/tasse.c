#include "stdlib.h"

unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni, unsigned int *aliquote, size_t n)
{
    size_t i = 0;
    unsigned int ris = 0;
    double x = 0;
    while (scaglioni[i] <= stipendio)
    {
        i++;
        if (i == n)
        {
            break;
        }
    }

    if(i==1)
    {
         x = aliquote[0];
        double y = x / 100;
        ris=stipendio*y;
        return ris;
    }

    for (size_t k = 1;; k++)
    {
        x = aliquote[k - 1];
        double y = x / 100;

        if (k > 1)
        {
            if (k == i)
            {
                ris = ris + ((stipendio - scaglioni[k - 1] + 1) * y);
                break;
            }
            ris = ris + ((scaglioni[k] - scaglioni[k - 1] + 1) * y);
            continue;
        }
        ris = ris + (scaglioni[k] * y);
    }
    return ris;
}

int main(void)
{
    unsigned int stipendio = 25000;
    unsigned int s[] = {0, 15000, 28000, 55000, 75000 };
    unsigned int a[] = {23, 27, 38, 41, 43};
    size_t n = 5;
    irpef(stipendio, s, a, n);
    return 0;
}