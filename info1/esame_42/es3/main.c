#include "rectangle.h"

int main(void)
{
    struct point p1 = {1, 2};
     struct point p4 = {3, 4};
    struct point p2 = {-9, -8};
    struct point p3 = {-7, -6};
   

    struct rect *c = malloc(2 * sizeof(struct point));
    c[0].a = p1;
    c[0].b = p4;
    c[1].a = p3;
    c[1].b = p2;
    
   find_largest(c,2);
    return 0;
}