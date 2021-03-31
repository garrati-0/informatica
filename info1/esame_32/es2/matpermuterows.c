#include "matrix.h"

struct matrix *mat_permute_rows(const struct matrix *m, const size_t *p)
{
    if(m==NULL)
    return NULL;

    struct matrix *new=malloc(sizeof(struct matrix));   //creo la matrice
    new->cols=m->cols;
    new->rows=m->rows;
    new->data=calloc(new->rows*new->cols,sizeof(double));
    
    size_t i=0;  //contantore per il vettore 
    for(size_t r=0;r<new->rows;r++)
    {
        for(size_t c=0;c<new->cols;c++)
        {
             new->data[r*new->cols+c]=m->data[p[i]*m->cols+c];
        }

        i++;
    }

    return new;
}



/*FILE.H
#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
struct matrix {
    size_t rows, cols;
    double *data;
};


extern struct matrix *mat_permute_rows(const struct matrix *m, const size_t *p);
#endif
*/