#include "read_dvec.h"

struct dvec *read_dvec_comp(const char *filename)
{
    if (filename == NULL)
        return NULL;

    FILE *f = fopen(filename, "rb");
    if (f == NULL)
    {
        struct dvec *new = malloc(sizeof(struct dvec));
        new->n = 0;
        new->d = NULL;
        return new;
    }

    struct dvec *new = malloc(sizeof(struct dvec));
    double h=0;
    double tmp=0;
    new->d=malloc(1*sizeof(double));
    new->n=1;
    while (1)
    {
        size_t i=0;
        size_t c = fread(&h,sizeof(16), 1, f);
        if (c != 1)
            break;
       
        new->n++;
        new->d=realloc(new->d,new->n*sizeof(double));
        tmp=h;
        h=h/2e14;
        new->d[i]=h; 
        i++;
    }

    return new;
}