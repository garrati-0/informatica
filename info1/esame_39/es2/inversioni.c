#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool inverti_case(const char *nomefilein, const char *nomefileout)
{
    FILE *f = fopen(nomefilein, "r");
    if (f == NULL)
        return false;

    FILE *o = fopen(nomefileout, "w");

    int min = 'A';
    int max = 'Z';

    while (true)
    {
        int c = fgetc(f);
        if (c == EOF)
            break;

        if (c >= min && c <= max)
        {
            c = c + 32;
            fputc(c, o);
            continue;
        }

        if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
            fputc(c, o);
            continue;
        }

        fputc(c,o);
    }

    fclose(f);
    fclose(o);
    return true;
}

int main(void)
{
    char *c = {"in3"};
    char *co = {"out"};
    inverti_case(c, co);
    return 0;
}