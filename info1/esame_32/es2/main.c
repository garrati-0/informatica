#include "matrix.h"

int main(void)
{
    struct matrix a={3,3,NULL};
    double data[]={1,2,3,4,5,6,7,8,9};
    a.data=&data;
    size_t vet[]={1,2,0};
    mat_permute_rows(&a,vet);
    return 0;
}
