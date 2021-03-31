#include <stdio.h>
#include <stdint.h>

void stampa_tavola_pitagorica(FILE *f, unsigned int n)
{
    int num=0;//numero da stampare
    int x=1;//variabile da aumentare a seconda della riga
    for(size_t i=0;i<n;i++)//righe
    {
        for(size_t r=0;r<n;r++)//colonne
        {
            num=num+x;
            fprintf(f,"%d ",num);
            
        }
        num=0;
        x++;
        fprintf(f,"\n");
    }
}

int main(void)
{
    FILE*a=fopen("tavolapitagorica.txt","w");
    if(a==NULL)
    return -1;
    stampa_tavola_pitagorica(a,5);
    fclose(a);
    return 0;
}