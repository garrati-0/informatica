
double pot(double x, double y)
{
    double tmp = x;
    for (int i = 0; i < y - 1; i++)
    {
        x = tmp * x;
    }
    return x;
}

double fat(double x)
{
    double tmp = x;
    for (int i = x - 1; i > 0; i--)
    {
        x = i * x;
    }
    return x;
}

double seno_iperbolico(double x)
{
    double ris = 0;
    double risvecchio = 1;
    for (int n = 0; ris!=risvecchio; n++)
    {
        risvecchio=ris;
        ris =ris+ ((pot(x, 2 * n + 1)) / (fat(2 * n + 1)));
        
    }

    return ris;
}

int main(void)
{
    seno_iperbolico(2);
    return 0;
}
