#include "variant.h"

int main(void)
{
    FILE *f = fopen("file2.variant", "rb");
    char c = 0;
    read_variant(f, &c);
    read_variant(f, &c);
    read_variant(f, &c);
    read_variant(f, &c);
    read_variant(f, &c);
    read_variant(f, &c);
    read_variant(f, &c);
    read_variant(f, &c);
    return 0;
}