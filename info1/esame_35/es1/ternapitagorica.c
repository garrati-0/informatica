#include "stdbool.h"
#include "stdlib.h"

bool is_terna_pitagorica(unsigned int v[3])
{
    if (v == NULL)
    {
        return NULL;
    }

    v[0] = v[0] * v[0];
    v[1] = v[1] * v[1];
    v[2] = v[2] * v[2];

    unsigned int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int c = 0; c < 3; c++)
        {
            if (c != i)
            {
                sum = v[c] + sum;
            }
        }

        if (sum == v[i])
        {
            return true;
        }
        sum = 0;
    }

    return false;
}

int main(void)
{
    unsigned int v[3] = {3, 4, 5};
    bool ris=is_terna_pitagorica(v);
    return 0;
}