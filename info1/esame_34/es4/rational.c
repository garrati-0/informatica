#include "rational.h"

void rational_sum(struct rational *sum, const struct rational *first, const struct rational *second)
{
   

    sum->num = (first->num * second->den) + (first->den * second->num); //numeratore
    sum->den = first->den * second->den;                                //denominatore

     if (sum->num == 0 || sum->den == 0)
    {
        sum->num = 0;
        sum->den = 1;
    }

    int max = 0;
    if (sum->den < sum->num)
    {
        max = sum->den;
    }
    else
    {
        max = sum->num;
    }

    for (int i = 2; i <= max; i++)
    {

        if (sum->num % i == 0 && sum->den % i == 0)
        {
            sum->num = sum->num / i;
            sum->den = sum->den / i;
            i = 1;
            if (sum->den < sum->num)
            {
                max = sum->den;
            }
            else
            {
                max = sum->num;
            }
        }
    }
}
