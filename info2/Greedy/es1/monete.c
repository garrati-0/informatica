#include <stdlib.h>
#include <string.h>

int *monete(int *tagli, size_t tagli_size, int buget)
{
    if (buget <= 0)
        return NULL;


    int *res = calloc(tagli_size, sizeof(int));

    for(size_t i=0; i<tagli_size; i++)
    {
         res[i]=buget/tagli[i];
         buget=buget%tagli[i];
    }

    return res;
}

int main(void)
{
    int tagli[] = {50, 20, 10, 5, 2, 1};
    int *res = monete(tagli, sizeof(tagli) / sizeof(int), 126); //sizeof(tagli)/sizeof(int) è il numero di elementi del vettore
    free(res);
}
/*
int tagli[] = {50, 20, 6, 5, 1}; con buget=10;
non avrei ottenuto la soluzione ottima {5,5} ma
avrei ottenuto {6,1,1,1,1} la quale non è la soluzione migliore
*/