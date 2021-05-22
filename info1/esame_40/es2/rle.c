#include "rle.h"
#include <stdlib.h>
#include <stdint.h>

#define ever (;;)

bool easy_rle_decode(const char *nomefilein, const char *nomefileout)
{
    if (nomefilein == NULL || nomefileout == NULL)
        return false;

    FILE *f = fopen(nomefilein, "rb");
    if (f == NULL)
        return false;

    FILE *c = fopen(nomefileout, "wb");

    uint16_t g = 0;
    size_t l = 0;
    char str = 0; //calloc(100, sizeof(char));
    for
        ever
        {
            int s = fread(&g, 1, 1, f);
            if (s != 1)
                break;

            //  str = realloc(str, l + 1 * sizeof(char));
            fread(&str, 1, 1, f);
            fwrite(&str, sizeof(char), 1, c);
            l++;
            for (int k = 0; k < g; k++)
            {
                //  str[l] = str[l - 1];
                fwrite(&str, sizeof(char), 1, c);
                l++;
            }
        }

    // fwrite(&str[y],sizeof(char),1,c);

    fclose(f);
    fclose(c);

    return true;
}