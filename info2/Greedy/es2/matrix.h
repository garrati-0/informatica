#if !defined MATRIX_H
#define MATRIX_H
#include <stdlib.h>
#include <stdio.h>
typedef struct {
    int codice;
    float peso;
    float prezzo;
} Gioiello;

extern Gioiello *CompraGioielli(const char *filename, float budget, size_t *ret_size);
#endif // GIOiELLI_H