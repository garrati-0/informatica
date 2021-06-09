#include "WTK.h"

size_t write_points(FILE *f, const struct point *p, size_t n)
{
    if (f == NULL || p==NULL)
        return 0;

    size_t i;
    for (i = 0; i < n; i++)
    {
        fprintf(f, "POINT(%g %g)\n", p[i].x, p[i].y);
    }
    return i;
}