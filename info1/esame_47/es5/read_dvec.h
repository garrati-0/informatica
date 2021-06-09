#if !defined READ_DVEC_H
#define READ_DVEC_H
#include <stdio.h>
#include <stdlib.h>
struct dvec
{
    size_t n;
    double *d;
};

extern struct dvec *read_dvec_comp(const char *filename);
#endif /*READ_DVEC_H*/