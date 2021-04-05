#include "rational.h"

int main(void)
{
    struct rational *sum = malloc(sizeof(struct rational));
    struct rational *a = malloc(sizeof(struct rational));
    struct rational *b = malloc(sizeof(struct rational));
    a->num = 5;
    a->den = 7;
    b->num = -10;
    b->den = 14;
    rational_sum(sum, a, b);
    return 0;
}