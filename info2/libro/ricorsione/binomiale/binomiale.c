
double BinomialeRec(unsigned int n, unsigned int k)
{
    if (n == 0 || k > n)
        return -1;

    if (k == 0 || k == n)
        return 1;

    return BinomialeRec(n - 1, k - 1) + BinomialeRec(n - 1, k);
}

int main(void)
{
    double c = BinomialeRec(10, 1);
    return 0;
}