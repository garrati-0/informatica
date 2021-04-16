#include"stdbool.h"
#include "stdlib.h"

bool cifre_duplicate_hex(unsigned int n)
{
    char *v = NULL;
	int i = 0;

	while (n >= 1)//scomponiano il numero in base 16
	{
		v = realloc(v, (i + 1) * sizeof(int));
		v[i] = n % 16;
		n = n / 16;
		i++;
	}

    for(int a=0;a<i;a++)
    {
        for(int k=0;k<i;k++)
        {
            if(i!=k)
            {
                if(v[i]==v[k])
                {
                    free(v);
                    return true;
                }
            }
        }
    }

    return false;
}


 int main(void)
 {
     cifre_duplicate_hex(11);
     return 0;
 }