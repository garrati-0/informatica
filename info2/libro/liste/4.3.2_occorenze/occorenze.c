#include "list.h"

int ListOccorenze(const Item *i, const ElemType *e)
{
    int count=0;
    while(i!=NULL)
    {
        if(i->value==*e)
            count++;
        
        i=i->next;
    }
    return count;
}

int main(void)
{
    int vect[] = {1, 3, 2, 4, 5};
    Item *l = NULL;
    for (int i = 0; i < 5; i++)
    {
        l = ListInsertBack(l, &vect[i]);
    }
    int e = 0;
    ListOccorenze(l, &e);
    return 0;
}