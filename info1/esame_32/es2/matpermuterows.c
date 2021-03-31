#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double *data;
};
//#include "matrix.h"
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

int main(void)
{
    struct matrix a={3,3,NULL};
    double data[]={1,2,3,4,5,6,7,8,9};
    a.data=&data;
    size_t vet[]={1,2,0};
    mat_permute_rows(&a,vet);
    return 0;
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