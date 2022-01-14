#include "vector_list.h"

Item *Vector2List(const ElemType *v, size_t v_size, enum ConversionType c)
{
    if (v == NULL)
        return NULL;

    Item *list = NULL;
    if (c == KInOrder)
    {
        for (size_t i = 0; i < v_size; i++)
        {
            list = ListInsertBack(list, &v[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < v_size; i++)
        {
            list = ListInsertHead(&v[i], list);
        }
    }
    ListWriteStdout(list);
    return list;
}
ElemType *List2Vector(const Item *i, size_t *v_size, enum ConversionType c)
{
    if (i == NULL)
    {
        *v_size = 0;
        return NULL;
    }
    *v_size = 1;
    int *vect = malloc((*v_size) * sizeof(int));
    const Item *tmp=i;
    if (c == KInOrder)
    {
        while (i != NULL)
        {
            vect[*v_size - 1] = i->value;
            i = i->next;
            *v_size = *v_size + 1;
            vect = realloc(vect, *v_size * sizeof(int));
        }
    }
    else
    {
        int j;
        for( j=0;i!=NULL;j++)
        i=i->next;

        i=tmp;
        *v_size=j;
        j=0;
        vect = realloc(vect, *v_size * sizeof(int));
        int cont=0;
        while (*v_size>0)
        {
            if(cont==*v_size-1)
            {
                vect[j] = i->value;
                j++;
                i=tmp;
                *v_size=*v_size-1;
                cont=0;
                continue;
            }
            cont++;
            i=i->next;
        }
    }

    return vect;
}