#include "WTK.h"

int main(void)
{
    struct point *a = malloc(3 * sizeof(struct point));
    size_t n = 3;
    a[0].x = 5;
    a[0].y = 1;
    a[1].x = 4.3;
    a[1].y = 7;
    a[2].x = 5;
    a[2].y = 5;
    FILE*f=fopen("prova.txt","w");
    write_points(f,a,n);
    return 0;
}