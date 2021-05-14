#include "vec_double.h"
#include <stdlib.h>

struct vec_double *read_vec_double(const char *filename)
{
    if (filename == NULL)
        return NULL;

    FILE *f = fopen(filename, "rb");
    if (f == NULL)
        return NULL;

    struct vec_double *a=malloc(sizeof(struct vec_double));

    uint32_t *h = &a->size;
    size_t c = fread(h, sizeof(uint32_t), 1, f);
    if(a->size==0)
    {
        a->data=NULL;
        return a;
    }

   a->data=malloc(a->size*sizeof(double));

    for (size_t i = 0; i < a->size; i++)
    {
       
        c = fread(&a->data[i],sizeof(double), 1, f);
        if (c != 1)
            return NULL;
    }

    return a;
}