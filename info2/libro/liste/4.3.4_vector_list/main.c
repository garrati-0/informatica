#include "vector_list.h"

int main(void)
{
    int v[] = {1, 2, 3, 4, 5, 6};
    size_t v_size = sizeof(v) / sizeof(int);
    Item *list = Vector2List(v, v_size, KInOrder);
    Vector2List(v, v_size, KReverse);
    size_t n=0;
    List2Vector(list,&n,KInOrder);
    List2Vector(list,&n,KReverse);
    return 0;
}