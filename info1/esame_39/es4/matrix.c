#include "matrix.h"

struct matrix *mat_delete_col(const struct matrix *m, size_t i)
{
    if (m == NULL||i>=m->cols)
        return NULL;

    struct matrix *new = malloc(sizeof(struct matrix));
    new->rows = m->rows;
    new->cols = m->cols - 1;
    new->data = calloc(new->rows *new->cols, sizeof(double));
    size_t c1 = 0;
    for (size_t r = 0; r < m->rows; r++)
    {
        for (size_t c = 0; c < m->cols; c++)
        {
            if (c != i)
            {
                new->data[r * new->cols + c1] = m->data[r * m->cols + c];
                c1++;
            }
        }
        c1=0;
    }

    return new;
}