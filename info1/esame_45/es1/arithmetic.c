#include <stdbool.h>
#include <stdlib.h>

bool is_arithmetic(const int *v, size_t n)
{
    if (v == NULL || n==1 )
        return false;

    int tmp = v[0] - v[1];
    for (size_t i = 0; i < n - 1; i++)
    {
        if (v[i] - v[i + 1] != tmp)
            return false;
    }
    return true;
}

int main(void)
{
    int vet[] = {1, 3, 3, 7};
    is_arithmetic(vet, 4);
    return 0;
}