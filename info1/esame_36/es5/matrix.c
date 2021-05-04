#include "matrix.h"

struct matrix *mat_permute_rows(const struct matrix *m, const size_t *p)
{
    if (m == NULL || p == NULL)
        return NULL;

    struct matrix *new = malloc(sizeof(struct matrix));
    new->rows = m->rows;
    new->cols = m->cols;
    new->data = calloc(new->rows *new->cols, sizeof(double));

    size_t k = 0;
    for (size_t r = 0; r < new->rows; r++)
    {
        for (size_t c = 0; c < new->cols; c++)
        {
            new->data[r * new->cols + c] = m->data[p[k] * new->cols + c];
        }

        k++;
    }

    return new;
}