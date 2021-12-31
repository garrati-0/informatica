#include "list.h"

Item *ListLoad(const char *filename)
{
    FILE *f = fopen(filename, "r");
    if (f == NULL)
    {
        printf("Errore apertura file\n");
        return NULL;
    }

    Item *list = NULL;
    while (1)
    {
        int n = 0;
        int c = fscanf(f, "%d", &n);
        if (c != 1)
            break;
        
       list = ListInsertHead(&n,list);
    }

    fclose(f);
    ListWriteStdout(list);
    return list;
}   

int main(void)
{
    ListLoad("res/data_00.txt");
    return 0;
}