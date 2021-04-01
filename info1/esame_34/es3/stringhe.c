#include <stdlib.h>
#include <string.h>

char *parola_piu_lunga(const char *sz)
{
    if (sz == NULL)
    {
        return NULL;
    }

    int n = strlen(sz);
    int tmp = 0;
    int dim = 0;
    int pos = 0;
    for (int i = 0; i <= n; i++)
    {
        if (sz[i] == ' ' || sz[i] == 10 || sz[i] == 0)
        {
            if (dim < tmp)
            {
                dim = tmp;
                pos = i - dim;
            }
            tmp = 0;
            continue;
        }
        tmp++;
    }

    char *c = calloc(dim + 1, sizeof(char));
    for (int i = 0; i < dim; i++)
    {
        c[i] = sz[pos];
        pos++;
    }
    return c;
}

int main(void)
{
    char *s = {"uno!!\n        due!\n	tre\n  "};
    parola_piu_lunga(s);
    return 0;
}