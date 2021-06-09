#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char *hangman(const char *frase, const char *lettere)
{
    if (frase == NULL || lettere == NULL)
        return NULL;

    size_t dim = strlen(frase);
    char *new = calloc(dim + 1, sizeof(char));
    int dist = 'a' - 'A';
    bool tmp = true;
    for (size_t i = 0; i <= dim; i++)
    {
        if (frase[i] >= 'a' && frase[i] <= 'z' || frase[i] >= 'A' && frase[i] <= 'Z')
        {
            for (size_t k = 0; lettere[k] != 0; k++)
            {
                if (frase[i] == lettere[k] || frase[i] + dist == lettere[k])
                {
                    new[i] = frase[i];
                    tmp = false;
                    break;
                }
            }
        }
        else
        {
            new[i] = frase[i];
            tmp = false;
        }
        if (tmp)
        {
            new[i] = '*';
        }
        tmp = true;
    }
    return new;
}

int main(void)
{
    hangman("Questa e' una frase di prova.", "");
    return 0;
}