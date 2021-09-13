#include "list.h"
//#include "load.h"

const ElemType *MaxElement(const Item *i)
{
    ElemType *max = NULL;
    if (i == NULL)
        return NULL;

  //  const Item *pre=i;
    const Item *cur=i;
    //Item *ris=NULL;
     ElemType a=0;
    max=&a;
   // int count=0;
    while (cur != NULL)
    {
    
        if(cur->value>*max)
        {
    //        ris = pre->next; 
            max=&cur->value;       
        }
       // count++;
        cur=cur->next;

        /*if(count>1)
        {
            pre=pre->next;
        }*/
    }

    return max;
}
/*
int main(void)
{
    Item *i = ListLoad("res/data_00.txt");
    const ElemType *max = MaxElement(i);
    return 0;
}*/