#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void spazi(uint8_t s)
{
    for (size_t i = 0; i < s; i++)
    {
        printf(" ");
    }
}

void cornice(uint8_t h, uint8_t w)
{
    if (h == 0 || w == 0)
        return;

    uint8_t s = (w * 3) + w - 3;
    for (uint8_t i = 0; i < w; i++) //lato superiore
    {
        if (i != w - 1)
        {
            printf("/-\\");
            printf("|");
            continue;
        }

        printf("/-\\\n");
    }

    for (uint8_t i = 0; i < h; i++) //lato destro e sinistro
    {
        if (i != 0)
        {
            printf("/");
            spazi(s);
            printf("\\\n");
        }

        printf("|");
        spazi(s);
        printf("|\n");
        if (i != h - 1)
        {
            printf("\\");
            spazi(s);
            printf("/\n");
            printf("-");
            spazi(s);
            printf("-\n");
        }
    }

    for (uint8_t i = 0; i < w; i++)
    {
        if (i != w - 1)
        {
            printf("\\-/");
            printf("|");
            continue;
        }

        printf("\\-/\n");
    }
}

int main(void)
{
    cornice(1, 1);
    return 0;
}