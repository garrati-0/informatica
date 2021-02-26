#include <stdio.h>
#include <stdlib.h>

int fattoriale(int n)
{
     if(n==1)
    return 1;
    else
    return n*fattoriale(n-1);

}
int main(void)
{
    int c=fattoriale (3);
    int *a = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        a[i] = i;
    }
    printf("funziona");
    FILE *f = fopen("prova.txt", "w");
    fprintf(f, "hello world");
    return 0;
}