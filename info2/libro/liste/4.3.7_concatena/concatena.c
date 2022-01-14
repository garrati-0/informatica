#include "concatena.h"

Item *Concatena(Item *i1, Item *i2, enum ConcType c)
{
    if (c == KCopy)
    {
        Item *list = NULL;
        while (1)
        {
            if (i1 != NULL)
            {
                list = ListInsertBack(list, &i1->value);
                i1 = i1->next;
            }
            else
            {
                if (i2 == NULL)
                    break;
                list = ListInsertBack(list, &i2->value);
                i2 = i2->next;
            }
        }
        ListWriteStdout(list);
        return list;
    }

    Item *list = i1;
    while (i1 != NULL)
    {
        if (i1->next == NULL)
        {
            i1->next = i2;
            break;
        }

        i1 = i1->next;
    }
    i1 = list;
    ListWriteStdout(i1);
    return i1;
}