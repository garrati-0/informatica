#include "matrix.h"

double *matrix_snake(const struct matrix *m)
{
    if (m == NULL)
        return NULL;

    double *vect = calloc(m->rows * m->cols, sizeof(double));
    size_t i = 0;
    size_t tmp=0;
    for (size_t r = 0; r < m->rows; r++)
    {
        if ((r+1) % 2 == 0)
        {
            for (size_t c = m->cols-1;tmp<m->cols; c--)
            {
                vect[i] = m->data[r * m->cols + c];
                i++;
                tmp++;
            }
            tmp=0;
        }
        else
        {
            for (size_t c = 0; c < m->cols; c++)
            {
                vect[i] = m->data[r * m->cols + c];
                i++;
            }
        }
    }
    return vect;
}