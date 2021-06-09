#include "segmento.h"

struct segmento *intersezione(struct segmento s1, struct segmento s2)
{
    if (s1.a >= s1.b || s2.a >= s2.b)
        return NULL;

    int dim1 = s1.b - s1.a;
    int dim2 = s2.b - s2.a;
    struct segmento *new = malloc(sizeof(struct segmento));
    int *vect1 = malloc(dim1 * sizeof(int));
    int *vect2 = malloc(dim2 * sizeof(int));
    size_t count = 0;
    for (int i = s1.a; i < s1.b; i++)
    {
        vect1[count] = i;
        count++;
    }
    count = 0;
    for (int i = s2.a; i < s2.b; i++)
    {
        vect2[count] = i;
        count++;
    }
    count = 0;
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++)
        {
            if (vect1[i] == vect2[j])
            {
                if (count == 0)
                {
                    new->a = vect1[i];
                    new->b = vect1[i] + 1;
                }
                else
                {
                    new->b = vect1[i] + 1;
                }
                count++;
            }
        }
    }

    free(vect1);
    free(vect2);
    
    if (count == 0)
    {
        return NULL;
    }
    return new;
}