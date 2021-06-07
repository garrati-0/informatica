#include "nonogram.h"

int main(void)
{
    struct nonogram *a = malloc(sizeof(struct nonogram));

    nonogram_load(a, "nonogram1.txt");
    printf("%s", a->schema);
    nonogram_load(a, "nonogram2.txt");
    printf("%s", a->schema);
    nonogram_load(a, "nonogram3.txt");
    printf("%s", a->schema);
    return 0;
}