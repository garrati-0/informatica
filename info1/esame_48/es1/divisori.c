#include "divisori.h"

unsigned int conta_divisori(unsigned int num, unsigned int max)
{
    int cont = 0;
    for (unsigned int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            if (i <= max)
            {
                cont++;
            }
        }
    }
    return cont;
}
