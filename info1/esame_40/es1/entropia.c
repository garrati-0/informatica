#include <stdlib.h>
#include <math.h>

double entropia(const double *v, size_t n)
{
    if (v == NULL || n == 0)
        return 0;

    double ris = 0;
    size_t count = 0;
    double h=log2(0.000000000);
    for (size_t i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            count++;
            ris=ris+v[i]*0;
            if (count == n)
                return 0;

            continue;
        }
        ris = ris + ((v[i])*(log2(v[i])));
    }
    return -ris;
}

int main(void)
{
    double vect[] = { 1.000000, 0.000000};
    entropia(vect, 2);
    return 0;
}