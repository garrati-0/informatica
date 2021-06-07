#include "product.h"

int main(void)
{
    FILE *f=fopen("prova.json","w");
    struct product a={"23456789","pizza margherita",9};
    write_products(f,&a,1);
    return 0;
}