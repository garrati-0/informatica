#include <stdint.h>
#include <string.h>
#include <stdlib.h>

uint8_t *nonogram_row(const char *s, size_t *n)
{
    if (s == NULL)
        return NULL;

    uint8_t *vect = malloc(200* sizeof(uint8_t));
    *n = 0;
    size_t dim = strlen(s);
    uint8_t tmp = 0;
    for (size_t i = 0; i <= dim ; i++)
    {
        if (s[i] == ' ' || s[i] == 0)
        {
            if (tmp != 0)
            {
                vect[*n] = tmp;
                *n = *n + 1;
                tmp = 0;
                continue;
            }
        }
        if (s[i] != ' ')
        {
            tmp++;
        }
    }
    vect=realloc(vect,*n*sizeof(uint8_t));
    return vect;
}

int main(void)
{
    char *s = {" * **** **"};
    size_t c = 0;
    nonogram_row(s, &c);
    return 0;
}