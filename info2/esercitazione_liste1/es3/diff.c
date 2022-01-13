#include "list.h"
#include "load.h"
#include <stdbool.h>

Item *Diff(const Item *i1, const Item *i2)
{
    Item *i3 = NULL;
    const Item *tmp = i2;
    bool deep = true;
    while (i1 != NULL)
    {
        while (i2 != NULL)
        {
            if (i1->value == i2->value)
            {
                deep = false;
                break;
            }

            i2 = i2->next;
        }
        if (deep)
            i3 = ListInsertBack(i3, &i1->value);

        deep = true;
        i2 = tmp;
        i1 = i1->next;
    }
    ListWriteStdout(i3);
    return i3;
}

int main(void)
{
    Item *i1 = ListLoad("res/data_00.txt");
    Item *i2 = ListLoad("res/data_01.txt");
    Diff(i1, i2);
    return 0;
}