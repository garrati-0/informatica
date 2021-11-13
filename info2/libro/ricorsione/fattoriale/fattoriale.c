
unsigned long long Fattoriale(int n)
{
    if (n < 0)
        return 0;

    if (n == 1 || n == 0)
        return 1;

    return Fattoriale(n - 1) * n;
}
/*
int main(void)
{
    long long i= Fattoriale(4);
    return 0;
}*/