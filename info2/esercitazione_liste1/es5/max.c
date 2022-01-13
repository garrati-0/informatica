#include "list.h"
//#include "load.h"

const ElemType *MaxElement(const Item *i)
{
    if(i==NULL)
    return NULL;

    ElemType m=0;
    const ElemType *max=&m;
    while(i!=NULL)
    {
        if(i->value>*max)
        {
            max=&i->value;
        }
        i=i->next;
    }
    return max;
}

/*int main(void)
{
    Item *list=ListLoad("res/data_00.txt");
    MaxElement(list);
    return 0;
}*/