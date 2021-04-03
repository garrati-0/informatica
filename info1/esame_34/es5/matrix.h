#if !defined MATRIX_H
#define MATRIX_H

#include "stdlib.h"
#include "stdbool.h"
#include "stdio.h"

struct matrix
{
    size_t rows, cols;
    double *data;
};

extern bool matrix_read(struct matrix *m, FILE *f);
#endif