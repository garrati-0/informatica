#include <math.h>

double fact(int n)
{
    for (int i = n - 1; i > 0; i--)
    {
        n = n * i;
    }
    return n;
}

double SenRec(double x, double i, double n)
{
    if (n > i)
        return 0;

    double ris = (pow(-1, n) / fact(2*n+1+1)) * pow(x, 2 * n + 1);

    return ris+SenRec(x,i,n+1);
}

double Sen(double x, int i)
{
    if (i < 0)
        return __DBL_MIN__;

    SenRec(x,i,0);
    return 0;
}

int main(void)
{
    Sen(3, 10);
    return 0;
}