#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *a = malloc(3 * sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        a[i] = i;
    }

    FILE *f = fopen("prova.txt", "w");
    fprintf(f,"hello world");
    return 0;
}