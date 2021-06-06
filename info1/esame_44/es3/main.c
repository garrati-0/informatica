#include "matrix.h"

int main(void)
{
    struct matrix a={2,4,NULL};
    double data[]={1,2,3,4,5,6,7,8};
    a.data=data;
    mat_vectorize(&a,BY_COLUMN);
    return 0;
}