#include "sequenza.h"
#define ever (;;)

bool seq_load(const char *filename, struct seq *s)
{
    FILE *f = fopen(filename, "rb");
    if (f == NULL)
        return false;

    s->values = calloc(40, sizeof(uint16_t));

    for
        ever
        {

            size_t c = fread(&s->values[s->len], sizeof(uint16_t), 1, f);

            if (c != 1)
            {
                fclose(f);
                break;
            }

            s->len++;
        }

    return true;
}