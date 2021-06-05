#include "rectangle.h"

extern int find_largest(const struct rect *r, size_t n)
{
    if (r == NULL || n == 0)
        return -1;

    int b = 0;
    int h = 0;
    int area = 0;
    int tmp = 0;
    int ris = 0;
    for (int i = 0; i < n; i++)
    {
        if (r[i].a.x < 0)
        {
            b = -r[i].a.x + r[i].b.x;
        }
        else if (r[i].b.x < 0)
        {
            b = r[i].a.x - r[i].b.x;
        }
        if (r[i].a.x < 0 && r[i].b.x < 0)
        {
            if (r[i].a.x > r[i].b.x)
            {
                b = r[i].a.x - r[i].b.x;
            }
            else if (r[i].a.x < r[i].b.x)
            {
                b = r[i].b.x - r[i].a.x;
            }
        }

        if (r[i].a.y < 0)
        {
            h = -r[i].a.y + r[i].b.y;
        }
        else if (r[i].b.y < 0)
        {
            h = r[i].a.y - r[i].b.y;
        }
        if (r[i].a.y < 0 && r[i].b.y < 0)
        {

          // r[i].a.y=-r[i].a.y; 

            if (r[i].a.y > r[i].b.y)
            {
                h = r[i].a.y - r[i].b.y;
            }
            else if (r[i].a.y < r[i].b.y)
            {
                h = r[i].b.y - r[i].a.y;
            }
        }

        tmp = b * h;
        if (area < tmp)
        {
            ris = i;
            area = tmp;
        }
    }

    return ris;
}