#include <stdlib.h>
#include <string.h>

void bad_word_filter(char *s, char **words, size_t nwords)
{

    size_t k = 0;
    size_t tmp=0;
    char *backup = calloc(256, sizeof(char));
    size_t kl = strlen(s);
    for (size_t i = 0; i < kl + 1; i++)
    {

        if (s[i] == ' ' || s[i] == 0)
        {

            for (size_t c = 0; c < nwords; c++)
            {
                if (strcmp(backup, words[c]) == 0)
                {
                    int dim = strlen(words[c]);
                    int dm = i - dim-tmp;
                    for (size_t p = dm; p < i-tmp; p++)
                    {
                        s[p] = '*';
                    }
                }
            }
            k = 0;
            for (size_t v = 0; backup[v] != 0; v++)
            {
                backup[v] = 0;
            }
            tmp=0;
            continue;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            backup[k] = s[i];
            k++;
            continue;
        }
         tmp++;
    }
    free(backup);
}

int main(void)
{
    char h[] = {"sei un carciofo!"};
    char *a[] = {"cacca", "carciofo", "bufala", "ciao"};
    bad_word_filter(h, a, 4);
    return 0;
}