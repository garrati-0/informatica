#include "matrix.h"

struct matrix *mat_rendiquadrata(const struct matrix *a)
{
    if (a == NULL)
        return NULL;

    struct matrix *m = malloc(sizeof(struct matrix));
    if (a->rows > a->cols)
    {
        m->cols = a->rows;
        m->rows = a->rows;
    }
    else
    {
        m->cols = a->cols;
        m->rows = a->cols;
    }

    m->data = calloc(m->cols * m->rows, sizeof(double));

    for (size_t r = 0; r < a->rows; r++)
    {

        for (size_t c = 0; c < a->cols; c++)
        {
            if (r >= a->rows)
            {
                m->data[r * m->cols + c] = 0;
            }
            else
            {
                m->data[r * m->cols + c] = a->data[r * a->cols + c];
            }
        }
    }

    return m;
}