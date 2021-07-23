#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

void subsetKRec(int n, int k, bool *vcurr, int i, int *nsol, int cnt) {
    
    if (cnt == k) { //quando il vettore contiene due elementi controllo se è soluzione
        (*nsol)++;
        printf("{ ");
        for (int j = 0; j < n; ++j) {
            if (vcurr[j]) {
                printf("%d ", j);
            }
        }
        printf("}, ");
        return;
    }
    
    if (i == n) {    //quando abbiamo raggiunto le foglie
        return;
    }
    
    vcurr[i] = 0;
    subsetKRec(n, k, vcurr, i + 1, nsol, cnt);

    vcurr[i] = 1;
    subsetKRec(n, k, vcurr, i + 1, nsol, cnt + 1);
    vcurr[i] = 0;

}


int substetk(int n,int k)
{
    bool *vcurr=calloc(n,sizeof(bool));
    int nsol=0;
    subsetKRec(n, k, vcurr, 0, &nsol, 0);
    free(vcurr);
    return nsol;
}

int main(void)
{
    int sol = substetk(4, 2);
    return 0;
}