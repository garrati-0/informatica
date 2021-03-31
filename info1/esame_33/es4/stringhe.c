#include "stringhe.h"
#include <stdlib.h>
#include <string.h>

char *title(const char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    int n = strlen(str);
    char *new = calloc(n + 1, sizeof(char));

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                char a = str[i] - 32;
                new[i] = a;
                continue;
            }
        }
        if (str[i] == ' ')
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                new[i] = ' ';
                char a = str[i + 1] - 32;
                new[i + 1] = a;
                i++;
                continue;
            }
        }

        new[i] = str[i];
    }

    return new;
}