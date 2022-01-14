#include "list.h"

int ListOccorenze(const Item*i,const ElemType *e)
{
    if(i==NULL)
    return 0;

    int cont=0;
    while(i!=NULL)
    {
        if(i->value==*e)
        cont++;

        i=i->next;
    }

    return cont;
}

int main(void)
{
    int vect[]={1,1,2,3,1,3,4,1};
    Item *list=NULL;
    ElemType e=1;
    for(int i=0;i<8;i++)
    {
        list=ListInsertBack(list,&vect[i]);
    }
    ListOccorenze(list,&e);
    return 0;
}
