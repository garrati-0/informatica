#include "concatena.h"

int main(void)
{
    int v1[] = {1, 2, 3, 4};
    int v2[] = {5, 6, 7};
    int v1_size = 4;
    int v2_size = 3;
    Item *i1 = NULL;
    Item *i2 = NULL;
    for (size_t i = 0; i < v1_size; i++)
    {
        i1=ListInsertBack(i1,&v1[i]);
    }
    for (size_t i = 0; i < v2_size; i++)
    {
        i2=ListInsertBack(i2,&v2[i]);
    }

    Concatena(i1,i2,KCopy);
    Concatena(i1,i2,KNoCopy);
    return 0;
}