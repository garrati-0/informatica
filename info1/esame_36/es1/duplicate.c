#include "stdbool.h"
#include "stdlib.h"

bool cifre_duplicate_oct(unsigned int n)
{
    unsigned int *v = NULL;
    size_t i = 0;
    while (n == 0) //trasformiamo il numero in base 8
    {
        v = realloc(v, i + 1 * sizeof(unsigned int));
        v[i] = n % 8;
        n = n / 8;
        i++;
    }

    //controlliamo se ha due cifre uguali
    for (size_t n = 0; n < i; n++)
    {
        for (size_t k = 0; k < i; k++)
        {
            if (n != k && v[i] == v[k])
            {
                free(v);
                return true;
            }
        }
    }

    free(v);
    return false;
}

int main(void)
{
    cifre_duplicate_oct(10);
    return 0;
}