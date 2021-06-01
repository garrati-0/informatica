#include <stdbool.h>

bool triangolare(int n)
{
    if (n <= 0)
        return false;

    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp = tmp + i;
        if (n == tmp)
        {
            return true;
        }
    }

    return false;
}

int main(void)
{
    triangolare(21);
    return 0;
}
//! 1,3,6,10,15   1,1+2,1+2+3,1+2+3+4