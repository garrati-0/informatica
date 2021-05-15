#include "stdbool.h"
#include "stdlib.h"
#include "stdio.h"
bool cifre_duplicate_oct(unsigned int n)
{
    printf("ciao");
    bool *v = calloc(8,sizeof(bool));
    size_t i = 0;
    while (n != 0) //trasformiamo il numero in base 8
    {
        i = n % 8;
        n = n / 8;
        if(v[i]==true)
        {
            free(v);
            return true;
        }
        v[i]=true;
        

    }

   /* //controlliamo se ha due cifre uguali
    for (size_t n = 0; n < i; n++)
    {
        for (size_t k = 0; k < i; k++)
        {
            if (n != k && v[n] == v[k])
            {
                free(v);
                return true;
            }
        }
    }*/
    free(v);
    return false;
}

int main(void)
{
    cifre_duplicate_oct(9);

    return 0;
}