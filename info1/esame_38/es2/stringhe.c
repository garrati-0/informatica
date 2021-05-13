#include "stringhe.h"
#include <string.h>

void elimina_consecutivi(char *str)
{
    if (str == NULL)
        return;

    size_t n = strlen(str);
    char *new = calloc(n + 1, sizeof(char));
    size_t k = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (str[i] == str[i + 1])
        {
            new[k] = str[i];
            k++;
            while (str[i] == str[i + 1])
            {
                i++;
            }
        }
        else
        {
            new[k] = str[i];
            k++;
        }
    }

    str = calloc(k + 1, sizeof(char));
    for (size_t h = 0; h < k; h++)
    {
        str[h] = new[h];
    }
    free(new);
}