#include "stringhe.h"
#include <string.h>

char *spacefill(const char *str, size_t n)
{
    if (str == NULL)
        return NULL;

    size_t nstr = strlen(str);                  //conto quanto è grande una stringa
    char *new = calloc(n + 1, sizeof(char)); //alloco la nuova stringa
    if (n <= nstr)
    {
        new=realloc(new,nstr+1*sizeof(char));
        return strcat(new, str);
    }
    size_t nspazi = n - nstr; //conto il numero di spazi da inserire

    size_t k = 0;
    for (size_t i = 0; i <= n; i++)
    {
        if (i < nspazi)
        {
            new[i] = ' ';
        }
        else
        {
            new[i] = str[k];
            k++;
        }
    }
    return new;
}