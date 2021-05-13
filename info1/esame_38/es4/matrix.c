#include "matrix.h"

struct matrix *mat_delete_row(const struct matrix *m, size_t i)
{
    if (m == NULL || i > m->rows)
        return NULL;

    struct matrix *new = malloc(sizeof(struct matrix));
    new->cols = m->cols;
    new->rows = m->rows - 1;
    new->data = calloc(new->cols *new->rows, sizeof(double));

    size_t r_n = 0;
    for (size_t r = 0; r < m->rows; r++)
    {
        for (size_t c = 0; c < m->cols; c++)
        {
            if (r != i )
            {
                new->data[r_n * new->cols + c] = m->data[r * m->cols + c];
            }
        }
        if (r != i )
            r_n++;
    }

    return new;
}
//Se i specifica una riga non valida, se m ha una sola riga, o se m è NULL, la funzione restituisce NULL.