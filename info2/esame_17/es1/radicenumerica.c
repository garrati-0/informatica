#include "stdlib.h"


int radice(int n,int ris)
{
   
    if(n==0)
    {
        n=ris;

        if(n<10)
        {
            return ris;
        }
        ris=0;
    }
    return radice(n/10,ris+n%10);
}


int main(int argc,char *argv[])
{
    
    int i= atoi(argv[1]);
    radice(i ,0);
    return 0;
}

