
unsigned int TrailingZerosRec(unsigned int n)
{
    if (n == 0)
        return 0;

    unsigned tmp = n;
    int count = 0;

    while (tmp % 2 == 0)
    {
        count++;
        tmp /= 2;
    }

    return count + TrailingZerosRec(n-1);
}

unsigned int TrailingZeros(unsigned int n)
{
    return TrailingZerosRec(n);
}

int main(void)
{
    unsigned int n = 6;
   unsigned int ris= TrailingZeros(n);
    return 0;
}