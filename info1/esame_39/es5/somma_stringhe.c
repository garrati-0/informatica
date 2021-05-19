#include <string.h>
#include <stdlib.h>

int *vec_stringhe(const char *a)
{
    size_t n = strlen(a);

    int *vec = calloc(n, sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        vec[i] = a[i] - 48;
    }
    return vec;
}

int vect_to_num(int *a, int n)
{
    int ris = 0;
    size_t k = 0;
    int exp = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (size_t h = 0; h < i; h++)
        {
            exp = exp * 10;
        }
        ris = ris + (a[k] * exp);
        k++;
        exp = 1;
    }
    return ris;
}

char *somma_stringhe(const char *a, const char *b)
{
    if (a == NULL || b == NULL)
        return NULL;

    size_t ps = strlen(a);
    size_t ss = strlen(b);
    int *prima_str = vec_stringhe(a);
    int *sec_str = vec_stringhe(b);
    int primo = vect_to_num(prima_str, ps);
    int secondo = vect_to_num(sec_str, ss);

    int ris = primo + secondo;
    free(prima_str);
    free(sec_str);
    int *str_ris = calloc(1, sizeof(char));
    size_t dim = 0;

    for (size_t c = 0; ris >= 1; c++)
    {
        dim++;
        str_ris = realloc(str_ris, (dim) * sizeof(int));
        str_ris[c] = ris % 10;
        ris = ris / 10;
    }

    char *s = calloc(dim, sizeof(char));
    int l = 0;
    for (int i = dim - 1; i >= 0; i--)
    {
        s[l] = str_ris[i] + 48;
        l++;
    }

    free(str_ris);

    return s;
}

int main(void)
{
    char *f = somma_stringhe("12345678901234567890", "98765432109876543210");
    return 0;
}