#if !defined VEC_DOUBLE_H
#define VEC_DOUBLE_H

#include <stdint.h>
#include <stdio.h>
struct vec_double {
    uint32_t size;
    double *data;
};

extern struct vec_double *read_vec_double(const char *filename);

#endif/*VEC_DOUBLE_H*/