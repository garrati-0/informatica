#include "list.h"
#include "load.h"

Item *Intersect(const Item *i1,const Item* i2)
{
    if(i1==NULL || i2==NULL)
    return NULL;

    Item *i3=NULL;
    const Item *tmp=i2;
    while(i1!=NULL)
    {
        while (i2!=NULL)
        {
            if(i1->value==i2->value)
            {
                i3=ListInsertBack(i3,&i1->value);
            }
           i2=i2->next;
        }
        i1=i1->next;
        i2=tmp;
    }
    ListWriteStdout(i3);
    return i3;
}

int main(void)
{
    Item *l1=ListLoad("res/data_00.txt");
    Item *l2=ListLoad("res/data_01.txt");
    Intersect(l1,l2);
    return 0;
}