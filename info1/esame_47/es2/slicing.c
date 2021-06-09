#include <stdlib.h>

int *slicing(const int *v, size_t *n, size_t start, size_t end, int step)
{
    if(v==NULL)
    return NULL;

    int*new=malloc(*n*sizeof(int));
    *n=0;
    if(step>0)
    {
        for(size_t i=start;i<=end;i=i+step)
        {
             new[*n]=v[i];
             *n=*n+1;
        }
    }else{
        for(size_t i=end;i>=start;i=i+step)
        {
             new[*n]=v[i];
             *n=*n+1;
        }
    }
    new=realloc(new,*n*sizeof(int));
    return new;
}

int main(void)
{
    int seq[]={1, 2, 3, 4, 5, 6, 7, 8};
    size_t n=8;
    slicing(seq,&n,2,6,-1);
    return 0;
}