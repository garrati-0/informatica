#include "matrix.h"

struct matrix *mat_pad(const struct matrix *mat)
{
    if (mat == NULL)
        return NULL;

    struct matrix *m = malloc(sizeof(struct matrix));
    m->rows = mat->rows + mat->rows - 1;
    m->cols = mat->cols + mat->cols - 1;
    m->data = calloc(m->rows * m->cols, sizeof(double));

    size_t c1 = 0;
    size_t r1 = 0;
    for (size_t r = 0; r < m->rows; r++)
    {
        if (r % 2 == 0)
        {
            for (size_t c = 0; c < m->cols; c++)
            {
                if (c % 2 == 0)
                {
                    m->data[r * m->cols + c] = mat->data[r1 * mat->cols + c1];
                    c1++;
                }
            }
            c1=0;
            r1++;
        }
    }
    return m;
}