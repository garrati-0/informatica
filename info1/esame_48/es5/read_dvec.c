#include "read_dvec.h"
#include <stdint.h>

struct dvec *read_dvec_comp(const char *filename)
{
    if (filename == NULL)
        return NULL;

    struct dvec *a = malloc(sizeof(struct dvec));
    a->n = 0;
    FILE *f = fopen(filename, "rb");
    if (f == NULL)
    {
        a->d = NULL;
        return a;
    }
    a->d = malloc(1 * sizeof(double));


  double h=0.00000000;
    while (1)
    {
        size_t c = fread(&h,sizeof(16),1,f);
        if(c==0)
        break;

        //h=h*16;
        h=-2.000000*2e14;
        a->d[a->n]=h;
        a->n=a->n+1;
        a->d=realloc(a->d,(a->n+1)*sizeof(double));
    }
    fclose(f);
    return a;
}