#include "list.h"

int ListLength(const Item* i)
{
    if(i==NULL)
    return 0;

    int cont=0;
    while(i!=NULL)
    {
        cont++;
        i=i->next;
    }
    return cont;
}

int main(void)
{
    Item *list=NULL;
    int c[59]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<59;i++)
    {
        list=ListInsertBack(list,&c[i]);
    }
    ListLength(list);
    return 0;
}