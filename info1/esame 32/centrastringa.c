#include "stdlib.h"
#include "string.h"
//#include "stringhe.h"
char *center(const char *str, size_t n, char c)
{
    int ln=strlen(str);
    size_t k=0;
    if(n<=ln)
    {
        char *new=calloc(ln+1,sizeof(char));
        for(int i=0;i<ln;i++)
        {
            new[i]=str[k];
            k++;
        }
        return new;
    }
    char *new=calloc(n+1,sizeof(char));
    int car=n-ln;
    if(car%2==0)
    {
        int dist=car/2;
        for(int i=0;i<n;i++)
        {
            if(i<dist){
                new[i]=c;
                continue;
            }
            if(i>=dist && i<ln+dist){
                new[i]=str[k];
                k++;
                continue;
            }

            new[i]=c;

        }
    }else{
        
        int dist=car/2;
        int distin=car-dist;
        if(dist>distin)
        {
            int x=dist;
            dist=distin;
            distin=x;
        }
        for(int i=0;i<n;i++)
        {
            if(i<dist){
                new[i]=c;
                continue;
            }
            if(i>=dist && i<ln+dist){
                new[i]=str[k];
                k++;
                continue;
            }

            new[i]=c;
        }
        
    }

    return new;
}

int main(void)
{
    char *str={"ciao"};
    size_t n=11;
    char c='.';
    char *ris=center(str,n,c);
    free(ris);
    return 0;
}


/*
FILE.H
#if !defined STRINGHE_H
#define STRINGHE_H

#include  <stdlib.h>
extern char *center(const char *str, size_t n, char c);

#endif
*/