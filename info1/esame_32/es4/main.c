#include "sequenza.h"

int main(void)
{
    struct seq *a=malloc(sizeof(struct seq));
    seq_load("seq3.bin",a);
    return 0;
}