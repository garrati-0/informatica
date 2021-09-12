#include "list.h"
//#include "load.h"
Item *Diff(const Item *i1, const Item *i2)
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
            list = ListInsertBack(list, &i1->value);

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

    Item *list = Diff(l1, l2);

    return 0;
}*/