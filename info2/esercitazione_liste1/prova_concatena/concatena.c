#include "load.h"
#include "list.h"

Item *concatena(Item *l1, Item *l2)
{
    while (l1 != NULL)
    {
        if(l1->next==NULL)
        {
            l1->next=l2;
           l2=l2->next;
           break;
        }
        l1=l1->next;
    }
    
    return l1;
}

int main(void)
{
    Item *i = ListLoad("res/data_00.txt");
    Item *j = ListLoad("res/data_01.txt");
    Item *k = concatena(i, j);
    return 0;
}