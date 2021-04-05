#include "rational.h"

int main(void)
{
    struct rational *sum = malloc(sizeof(struct rational));
    struct rational *a = malloc(sizeof(struct rational));
    struct rational *b = malloc(sizeof(struct rational));
    a->num = 2;
    a->den = 4;
    b->num = 5;
    b->den = 17;
    rational_sum(sum, a, b);
    return 0;
}