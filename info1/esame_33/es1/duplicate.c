#include <stdlib.h>
#include "stdbool.h"

bool cifre_duplicate(unsigned long long n)
{
    bool *arr = calloc(10, sizeof(bool));
    int x;
    while (n != 0)
    {
        x = n % 10;
        n = n / 10;
        if (arr[x] == true)
        {
            return true;
        }
        arr[x] = true;
    }

    return false;
}

int main(void)
{
    cifre_duplicate(1346871);
    return 0;
}