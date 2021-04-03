#include "matrix.h"

bool matrix_read(struct matrix *m, FILE *f)
{
    int rows=0;
    int cols=0;
    fscanf(f,"%d",&rows);
    fscanf(f,"%d",&cols);
    m->rows=rows;
    m->cols=cols;
    m->data=calloc(rows*cols,sizeof(double));
    for(size_t r=0;r<rows;r++)
    {
        for(size_t c=0;c<cols;c++)
        {
            double data=0;
            fscanf(f,"%lf",&data);
            if(data==EOF)
            {
                return false;
            }
            m->data[r*cols+c]=data;
        }
    }
    return true;
}