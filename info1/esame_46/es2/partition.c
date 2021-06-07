#include <stdlib.h>

size_t find_first_partition(const int *seq, size_t n)
{
    if (seq == NULL || n == 0)
        return 0;

    size_t tmp = 0;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t c = i + 1; c < n; c++)
        {
            if (seq[i] < seq[c])
                tmp++;
        }
        if (i != 0)
        {
            for (size_t c = i - 1; c < n; c--)
            {
                if (seq[i] > seq[c])
                    tmp++;
            }
        }
        if(tmp==n-1)
        {
            return i;
        }
        tmp=0;
    }
    return n;
}

int main(void)
{
    int vect[] = {1, 1, 4, 3, 6, 8, 10, 7, 9};
    size_t c=find_first_partition(vect, 9);
    return 0;
}