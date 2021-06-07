#include "product.h"

void write_products(FILE *f, const struct product *list, size_t n)
{
    if (f == NULL || list == NULL)
        return;

    for (size_t i = 0; i < n; i++)
    {
        if (i == 0)
            fprintf(f, "[\n");

        fprintf(f, "        {\n");
        fprintf(f, "                \"productId\": \"%s\",\n", list[i].productId);
        fprintf(f, "                \"fullName\": \"%s\",\n", list[i].fullName);
        fprintf(f, "                \"productId\": %d\n", list[i].price);
        if (i == n - 1)
        {
            fprintf(f, "        }\n");
            fprintf(f, "]\n");
        }else{
            fprintf(f, "        },\n");
        }
    }
}