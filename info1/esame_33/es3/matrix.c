#include "matrix.h"

struct bmatrix *mat_boolean(const struct matrix *m, double rhs, enum comparisons cmp)
{
    if (m == NULL)
    {
        return NULL;
    }

    struct bmatrix *bol = malloc(sizeof(struct bmatrix));
    bol->cols = m->cols;
    bol->rows = m->rows;
    bol->data = calloc(bol->rows * bol->cols, sizeof(bool));

    for (size_t r = 0; r < bol->rows; r++)
    {
        for (size_t c = 0; c < bol->cols; c++)
        {
            if (m->data[r * m->cols + c] < rhs && cmp == LT)
            {
                bol->data[r * bol->cols + c] = true;
            }
            else if (m->data[r * m->cols + c] <= rhs && cmp == LE)
            {
                bol->data[r * bol->cols + c] = true;
            }
            else if (m->data[r * m->cols + c] == rhs && cmp == EQ)
            {
                bol->data[r * bol->cols + c] = true;
            }
            else if (m->data[r * m->cols + c] != rhs && cmp == NE)
            {
                bol->data[r * bol->cols + c] = true;
            }
            else if (m->data[r * m->cols + c] >= rhs && cmp == GE)
            {
                bol->data[r * bol->cols + c] = true;
            }
            else if (m->data[r * m->cols + c] > rhs && cmp == GT)
            {
                bol->data[r * bol->cols + c] = true;
            }
        }
    }

    return bol;
}

// LT minore, LE  minore o uguale, EQ uguale, NE diverso,  GE maggiore o uguale,  GT  maggiore.