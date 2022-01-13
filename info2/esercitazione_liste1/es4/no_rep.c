#include "list.h"
#include "load.h"
#include <stdbool.h>

Item *IntersectNoRep(const Item *i1, const Item *i2)
{
    Item *i3 = NULL;
    const Item *tmp = i2;
    bool count = false;
    Item *tmpi3 = NULL;
    while (i1 != NULL)
    {
        while (i2 != NULL)
        {
            if (i1->value == i2->value) // verifico se i numeri sono uguali
            {
                count = true; // imposto true poiche il valore e' uguale
            }
            i2 = i2->next;
        }
        if (count)
        {
            tmpi3 = i3;
            while (i3 != NULL)
            {
                if (i1->value == i3->value)
                    count = false;

                i3 = i3->next;
            }
            i3 = tmpi3;
            if (count)
                i3 = ListInsertBack(i3, &i1->value);
        }

        count = false;
        i1 = i1->next;
        i2 = tmp;
    }
    ListWriteStdout(i3);
    return i3;
}

Item *DiffNoRep(const Item *i1, const Item *i2)
{
    Item *i3 = NULL;
    Item *tmpi3 = NULL;
    const Item *tmp = i2;
    bool count = true;
    while (i1 != NULL)
    {
        while (i2 != NULL)
        {
            if (i1->value == i2->value)
            {
                count = false;
                break;
            }

            i2 = i2->next;
        }
        if (count)
        {
            tmpi3 = i3;
            while (i3 != NULL)
            {
                if (i1->value == i3->value)
                    count = false;

                i3 = i3->next;
            }
            i3 = tmpi3;
            if (count)
                i3 = ListInsertBack(i3, &i1->value);
        }

        count = true;
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
    IntersectNoRep(i1, i2);
    return 0;
}