#include <stdio.h>

int main(void)
{
    FILE *f = fopen("res/data_01.txt", "r");
    if (f == NULL)
    {
        printf("Errore apertura file\n");
        return 1;
    }
    char s;
   
    fscanf(stdin,"%c",&s);

    fclose(f);
}
//int *fprinf(FILE *stream,const char* format.....);