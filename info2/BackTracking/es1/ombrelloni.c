#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void Ombrellonirec(int k, int n, bool *vcurr, int i, int *nsol)
{
    if (i == n)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (vcurr[j])
            {
                count++;
            }
        }

        if (count == k)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (vcurr[j])
                {
                    if(vcurr[j-1]==false)
                    {
                        count++;
                    }
                }
            }

            if (count == k)
            {
                *nsol += 1;
                printf("%d)",*nsol);
                for (int j = 0; j < n; ++j)
                {
                   
                        printf("%d ", vcurr[j]);
                   
                }
                printf("\n");
            }
        }
        return;
    }

    vcurr[i] = 0;
    Ombrellonirec(k, n, vcurr, i + 1, nsol);

    vcurr[i] = 1;
    Ombrellonirec(k, n, vcurr, i + 1, nsol);
}

int Ombrelloni(int k, int n)
{
    if(n<0)
    return 0;

    bool *vcurr = calloc(n, sizeof(bool));
    int nsol = 0;
    Ombrellonirec(k, n, vcurr, 0, &nsol);
    free(vcurr);
    return nsol;
}
/*
int main(void)
{
    Ombrelloni(2, 4);
    return 0;
}*/