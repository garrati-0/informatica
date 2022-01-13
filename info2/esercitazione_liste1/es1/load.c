#include "list.h"
#include <stdio.h>

Item *ListLoad(const char *filename)
{
    FILE *f = fopen(filename, "r");
    if (f == NULL)
        return NULL;

    Item *list = NULL;
    int num = 0;
    while (1)
    {
        int c = fscanf(f, "%d", &num);
        if (c != 1)
            break;

        list =ListInsertBack(list,&num);
        ListWriteStdout(list);
    }
    fclose(f);
    return list;
}

int main(void)
{
    ListLoad("res/data_00.txt");
    return 0;
}