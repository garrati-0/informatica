#include "scacchiera.h"

void stampa_scacchiera(const struct scacchiera *sc)
{
    if (sc == NULL)
        return;

    size_t rows = 8;
    size_t cols = 8;
    size_t i = 7;
    size_t h = 7;
    size_t l=8;
    for (size_t r = 0; r < rows; r++)
    {
        for (size_t c = 0; c < cols; c++)
        {
            if (c == cols - 1)
            {
                printf("+---+");
                continue;
            }
            printf("+---");
        }
        printf("\n");
        for (size_t c = 0; c < cols; c++)
        {
            
            if (c == cols - 1)
            {
                printf("| %c |", sc->caselle[h]);
                continue;
            }
            printf("| %c ", sc->caselle[h]);
            h = h + l;
        }
        h=i-1;
        printf("\n");
        if (r == rows - 1)
        {
            for (size_t c = 0; c < cols; c++)
            {
                if (c == cols - 1)
                {
                    printf("+---+");
                    continue;
                }
                printf("+---");
            }
            printf("\n");
        }
        i--;
    }
}