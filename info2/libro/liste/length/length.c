#include "list.h"

int ListLength(const Item *i)
{
    int count = 0;
    while (i != NULL)
    {
        ListWriteStdout(i);
        count++;
        i=i->next;
    }
    return count;
}

int main(void)
{
    int vect[] = {1, 2, 3, 4,5,6,7,8};
    Item *List = ListCreateEmpty();
    for (int i = 0; i < 8; i++)
    {
        List = ListInsertBack(List, &vect[i]);
    }

    ListWriteStdout(List);
    ListLength(List);
    return 0;
}