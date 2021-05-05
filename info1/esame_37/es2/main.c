#include "matrix.h"

int main(void)
{
    struct matrix a={3,2,NULL};
    double data[]={1,2,3,4,5,6};
    a.data=data;
    mat_rendiquadrata(&a);
    return 0;
}