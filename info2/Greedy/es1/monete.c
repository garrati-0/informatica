#include <stdlib.h>

int *monete(int *tagli, size_t tagli_size, int buget)
{
    if(buget <=0)
    return NULL;
}

int main(void)
{
    int tagli[] = {50, 20, 100, 5, 2, 1};
    int *res = monete(tagli, sizeof(tagli) / sizeof(int), 126); //sizeof(tagli)/sizeof(int) è il numero di elementi del vettore
    free(res);
}