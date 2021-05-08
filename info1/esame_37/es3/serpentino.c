#include "stdlib.h"
#include "string.h"

char *serpentino_encode(const char *s)
{
    if (s == NULL)
        return NULL;

    size_t dim = strlen(s);

    char *new = calloc(256, sizeof(char));

    size_t k = 0;
    for (size_t i = 0; i < dim; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
           // dim=dim+4;
          //  new = realloc(new, (dim) * sizeof(char));
            new[k] = s[i];
            new[k + 1] = 's';
            new[k + 2] = s[i];
            k = k + 3;
        }
        else
        {

            new[k] = s[i];
            k++;
        }
    }
    return new;
}

int main(void)
{
    serpentino_encode("ciao");
    return 0;
}
/*
le vocali sono:
a=asa
e=ese
i=isi
o=oso
u=usu

*/