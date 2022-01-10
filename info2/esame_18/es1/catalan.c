#include <stdio.h>

unsigned long int catalan(unsigned int n)
{
    // Base case
    if (n <= 1)
        return 1;

    // catalan(n) is sum of catalan(i)*catalan(n-i-1)
    unsigned long int res = 0;
    for (int i = 0; i < n; i++)
        res += catalan(i) * catalan(n - i - 1);

    return res;
}


int main(void)
{
    long long n = 4;
    if (n < 0)
        return 1;

    long long f = catalan(n);
    return 0;
}
