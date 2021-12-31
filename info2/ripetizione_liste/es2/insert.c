#include "list.h"

Item *Intersect(const Item *i1, const Item *i2)
{
    if (i1 == NULL || i2 == NULL)
        return NULL;

    Item *i3 = NULL;
    const Item *backup = i2;
    while (i1 != NULL)
    {
        while (i2 != NULL)
        {
            if (i1->value == i2->value)
            {
                i3 = ListInsertBack(i3, &i1->value);
                break;
            }
            i2 = i2->next;
        }
        i2 = backup;
        i1 = i1->next;
    }
    ListWriteStdout(i3);
    return i3;
}
int main(void)
{
    Item *l1 = NULL;
    int vect1[] = {3, 4, 2, 0, 45, 1, 3};
    for (size_t i = 0; i < 7; i++)
    {
        l1 = ListInsertBack(l1, &vect1[i]);
    }

    Item *l2 = NULL;
    int vect2[] = {8, 5, 2, 3, 45, 7};
    for (size_t i = 0; i < 6; i++)
    {
        l2 = ListInsertBack(l2, &vect2[i]);
    }

    Intersect(l1, l2);
    return 0;
}