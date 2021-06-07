#include <math.h>

double area_trapezio(double a, double b, double c, double d)
{
    double primoprodotto=0.5*(a+b);
    double prodottosottradice=((b-a))+(((c*c)-(d*d))/(b-a));
    double radice=c*c-((0.25)*(prodottosottradice*prodottosottradice));
    return primoprodotto*sqrt(radice);
}

int main(void)
{
    area_trapezio(2.2, 3.1, 2.4, 2.9);
    return 0;
}