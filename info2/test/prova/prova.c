#include <stdio.h>
#include <string.h>
#include <stdio.h>

// Diciamo che un numero intero é simpatico (definizione inventata) se può essere spezzato di due parti uguali.
//  Ad esempio, 11 e 123123 sono numeri simpatici.
//  Scrivere una funzione in C che, dato un numero intero, stabilisca se esso é simpatico.

int main()
{

    char *c = {"128128"};

    // se è disperi non va bene

    // se è pari
    size_t n = (strlen(c) + 1) / 2;
    size_t count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (c[i] == c[i + n])
        {
            count++;
        }
    }

    if (count == n)
    {
        printf("simp");
    }

    return 0;
}