#include "list.h"
//#include "load.h"

Item *DiffNoRep(const Item *i1, const Item *i2)
{        

    Item *list = NULL;
    const Item *tmp = i2;
    bool count = false;
    while (i1 != NULL)
    {
        while (i2 != NULL)
        {
            if (i1->value == i2->value)
            {
                count = true;
                break;
            }

            i2 = i2->next;
        }
        if (!count)
        {
            Item* l=list;
            while (list != NULL)
            {
                if (i1->value == list->value)
                {
                    count = true;
                }
                list=list->next;
            }
            list=l;
            if (!count)
                list = ListInsertBack(list, &i1->value);
        }

        i2 = tmp;
        count = false;
        i1 = i1->next;
    }
    return list;
}

Item *IntersectNoRep(const Item *i1, const Item *i2)
{
    Item *list = NULL;
    const Item *tmp = i2;
    bool count = false;
    while (i1 != NULL)
    {
        while (i2 != NULL)
        {
            if (i1->value == i2->value)
            {
                count = true;
                break;
            }
            i2 = i2->next;
        }
        if (count)
        {
            Item*l=list;
            while (list != NULL)
            {
                if (i1->value == list->value)
                {
                    count = false;
                }
                list=list->next;
            }
            list=l;
            if (count)
                list = ListInsertBack(list, &i1->value);
        }
        i2 = tmp;
        count=false;
        i1 = i1->next;
    }
    return list;
}
/*
int main(void)
{
    Item *l1 = ListLoad("res/data_00.txt");
    Item *l2 = ListLoad("res/data_01.txt");

    Item *list = DiffNoRep(l1, l2);
    Item *list1 = IntersectNoRep(l1, l2);
    return 0;
}*/