#include "list.h"

Item *Taglia(Item *i, int n)
{
    if (i == NULL)
        return NULL;

    int taglio = n / 2;
    if (n % 2 != 0)
        taglio++;

    Item *list2 = NULL;
    Item *tmp = i;
    int cont = 0;
    while (cont < n)
    {
        if (cont + 1 == taglio)
        {
            list2 = i->next;
            i->next = NULL;
            break;
        }
        cont++;
        i = i->next;
    }
    i = tmp;
    ListWriteStdout(i);
    ListWriteStdout(list2);
    return list2;
}

int main(void)
{
    int v[] = {5, 1, 7, 3, 8};
    int v_size = sizeof(v) / sizeof(int);
    Item *list = NULL;
    for (int i = 0; i < v_size; i++)
        list = ListInsertBack(list, &v[i]);

    Taglia(list, v_size);
    return 0;
}