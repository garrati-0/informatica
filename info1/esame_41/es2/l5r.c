#include <stdlib.h>

int roll_and_keep(const int *r, size_t x, size_t y)
{
    if (r == NULL || x == 0 || y == 0 || y > x)
        return 0;

    int ris = 0;
    size_t count = 0;
    size_t tmp = x;

    for (size_t i = 0; i < x; i++)
    {
        for (size_t y = 0; y < x; y++)
        {
            if (r[i] >= r[y] || i == y)
            {
                count++;
            }
        }
        if (count == tmp)
        {

            ris = ris + r[i];
            //  new[i] = 0; 
            tmp--;
            i = -1;
            if (tmp == x - y)
            {
                break;
            }
        }
        count = 0;
    }

    return ris;
}

int main(void)
{
    int vect[] = {3, 8, 2, 7, 1, 9};
    size_t x = 6;
    size_t y = 3;
    roll_and_keep(vect, x, y);
    return 0;
}