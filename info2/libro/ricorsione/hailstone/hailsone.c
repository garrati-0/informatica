#include <stdlib.h>
#include <stdio.h>
// se è pari n/2 se è dispari 3*n+1

size_t Hallstone(int n)
{
    if (n == 1)
        return 0;

    if (n % 2 == 0)
    {
        n = n / 2;
    }
    else
    {
        n = (3 * n) + 1;
    }

    printf("%d ", n);
    return Hallstone(n);
}

int main(void)
{
    Hallstone(11);
    return 0;
}