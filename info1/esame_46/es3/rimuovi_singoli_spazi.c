#include <stdlib.h>
#include <string.h>

char *rimuovi_singoli_spazi(const char *s)
{
    if (s == NULL)
        return NULL;

    size_t dim = strlen(s);
    char *new = calloc(dim + 1, sizeof(char));
    size_t k = 0;
    for (size_t i = 0; i < dim; i++)
    {
        if (s[i] == ' ' && s[i + 1] != ' ')
        {
            if (i == 0)
                continue;

            if (s[i - 1] != ' ')
                continue;
        }

        new[k] = s[i];
        k++;
    }
    return new;
}

int main(void)
{
    rimuovi_singoli_spazi("  a b c ");
    return 0;
}