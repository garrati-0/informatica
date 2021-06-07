#include "matrix.h"

int main(void)
{
    struct matrix a={2,3,NULL};
    double data[]={1,2,3,4,5,6};
    a.data=data;
    mat_pad(&a);
    return 0;
}