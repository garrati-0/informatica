#include "stdlib.h"
#include "stdio.h"

size_t contanumeri(const char *nomefile)
{
    FILE *f = fopen(nomefile, "r");
    if (f == NULL)
        return 1;


    size_t count = 0;
    while (1)
    {
        int c = fgetc(f);
        if (c == EOF)
            break;

        if (c >= '0' && c <= '9')
            count++;
    }

    fclose(f);
    return count;
}

int main(void)
{
    contanumeri("file1.txt");
    return 0;
}