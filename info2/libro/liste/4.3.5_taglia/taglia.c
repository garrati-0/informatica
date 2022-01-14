#include "list.h"

Item *taglia(Item *i, int n)
{
    if (n < 0)
        return i;

    if (i == NULL || n == 0)
        return NULL;

    Item *list = i;
    int cont = 0;
    while (cont != n)
    {
        if (i == NULL)
            break;

        if (cont + 1 == n)
        {
            i->next = NULL;
        }
        cont++;
        i = i->next;
    }

    i = list;
    ListWriteStdout(i);

    return i;
}

int main(void)
{
    int v[] = {};
    int v_size = sizeof(v) / sizeof(int);
    Item *list = NULL;
    for (int i = 0; i < v_size; i++)
        list = ListInsertBack(list, &v[i]);

    taglia(list, 5);
   
    return 0;
}