#include "matrix.h"

int main(void)
{
    char *file={"D.txt"};
    FILE *f=fopen(file,"r");
    struct matrix *a=malloc(sizeof(struct matrix));
    matrix_read(a,f);
    return 0;
}