#include "list.h"

Item *ListLoad(const char *filename)
{
    FILE *f = fopen(filename, "r");
    if (f == NULL)
        return NULL;

    Item *list = NULL;
    while (1)
    {
        int n = 0;
        int c = fscanf(f, "%d", &n);
        if (c != 1)
            break;

        list = ListInsertBack(list,&n);
    }
    fclose(f);
    return list;
}
/*
int main(void)
{

    Item *l = ListLoad("res/data_00.txt");
    return 0;
}*/
