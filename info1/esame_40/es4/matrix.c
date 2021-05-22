#include "matrix.h"

struct matrix *mirror_mat(const struct matrix *m)
{
    if (m == NULL)
        return NULL;

    struct matrix *new = malloc(sizeof(struct matrix));
    new->cols = m->cols;
    new->rows = m->rows;
    new->data = calloc(new->rows *new->cols, sizeof(double));

    size_t k=new->cols-1;
    
    for(size_t r=0;r<new->rows;r++)
    {
        for(size_t c=0;c<new->cols;c++)
        {
            new->data[r*new->cols+c]=m->data[r*m->cols+k];
            k--;
        }
        k=new->cols-1;
    }

    return new;
}