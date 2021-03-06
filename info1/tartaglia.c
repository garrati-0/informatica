#include <stdlib.h>

unsigned int *tartaglia(unsigned int *v, size_t n)
{
    if(n==0)
    {
        unsigned int *v1=malloc(1*sizeof(int));
        v1[0]=1;
        return v1;
    }
    if(n==1)
    {
       unsigned int *v2=malloc(2*sizeof(int));
        v2[0]=1;
        v2[1]=1;
        return v2;
    }
 
   unsigned int *vet=malloc((n+1)*sizeof(unsigned int));//creo il vettore
    vet[0]=1;//primo elemento uguale a 1
    vet[n]=1;//ultimo elemento uguale a 1
    for(size_t i=1;i<n;i++)
    {
         vet[i]=v[i-1]+v[i];
    }

    return vet;
  
}

int main(void)
{
    int v[]={1,5,10,10,5,1};
    size_t n=6;
    int *ris=tartaglia(v,n);
    free(ris);
    return 0;
}