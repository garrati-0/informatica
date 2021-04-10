#include "stringhe.h"
#include "string.h"

char *zfill(const char *str, size_t n)
{
    if (str == NULL)
        return NULL;

    size_t dim = strlen(str);
    if (n <= dim)
    {
        char *new = calloc(dim + 1, sizeof(char));
        size_t k = 0;
        for (size_t i = 0; i < dim; i++)
        {
            new[i] = str[k];
            k++;
        }

        return new;
    }
    char *new = calloc(n + 1, sizeof(char));

    size_t k = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (i >= n - dim)
        {
            new[i] = str[k];
            k++;
            continue;
        }

        new[i]='0';
    }

    return new;
}