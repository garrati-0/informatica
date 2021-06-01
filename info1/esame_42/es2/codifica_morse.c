#include <stdlib.h>
#include <string.h>

char *codifica_morse(const char *testo)
{
    if (testo == NULL)
        return NULL;

    int dim = strlen(testo);
    char *new = calloc(dim, sizeof(char));
    char *tmp = calloc(5, sizeof(char));

    int k = 0;
    int s=0;
    for (int i = 0; i <= dim; i++)
    {

        if (testo[i] == ' ' || testo[i] == '/' ||testo[i]==0)
        {
            if (testo[i] == '/')
            {
                new[k] = ' ';
                i++;
            }

            if (strcmp(tmp, "._") == 0)
            {
                new[k] = 'A';
            }
            if (strcmp(tmp, "_...") == 0)
            {
                new[k] = 'B';
            }
            if (strcmp(tmp, "_._.") == 0)
            {
                new[k] = 'C';
            }
            if (strcmp(tmp, "_..") == 0)
            {
                new[k] = 'D';
            }
            if (strcmp(tmp, ".") == 0)
            {
                new[k] = 'E';
            }
            if (strcmp(tmp, ".._.") == 0)
            {
                new[k] = 'F';
            }
            if (strcmp(tmp, "__.") == 0)
            {
                new[k] = 'G';
            }
            if (strcmp(tmp, "....") == 0)
            {
                new[k] = 'H';
            }
            if (strcmp(tmp, "..") == 0)
            {
                new[k] = 'I';
            }
            if (strcmp(tmp, ".___") == 0)
            {
                new[k] = 'J';
            }
            if (strcmp(tmp, "_._") == 0)
            {
                new[k] = 'K';
            }
            if (strcmp(tmp, "._..") == 0)
            {
                new[k] = 'L';
            }
            if (strcmp(tmp, "__") == 0)
            {
                new[k] = 'M';
            }
            if (strcmp(tmp, "_.") == 0)
            {
                new[k] = 'N';
            }
            if (strcmp(tmp, "___") == 0)
            {
                new[k] = 'O';
            }
            if (strcmp(tmp, ".__.") == 0)
            {
                new[k] = 'P';
            }
            if (strcmp(tmp, "__._") == 0)
            {
                new[k] = 'Q';
            }
            if (strcmp(tmp, "._.") == 0)
            {
                new[k] = 'R';
            }
            if (strcmp(tmp, "...") == 0)
            {
                new[k] = 'S';
            }
            if (strcmp(tmp, "_") == 0)
            {
                new[k] = 'T';
            }
            if (strcmp(tmp, ".._") == 0)
            {
                new[k] = 'U';
            }
            if (strcmp(tmp, "..._") == 0)
            {
                new[k] = 'V';
            }
            if (strcmp(tmp, ".__") == 0)
            {
                new[k] = 'W';
            }
            if (strcmp(tmp, "_.._") == 0)
            {
                new[k] = 'X';
            }
            if (strcmp(tmp, "_.__") == 0)
            {
                new[k] = 'Y';
            }
            if (strcmp(tmp, "__..") == 0)
            {
                new[k] = 'Z';
            }
           k++;
           tmp[0]=0;
           tmp[1]=0;
           tmp[2]=0;
           tmp[3]=0;
           s=0;
           continue;
        }
        tmp[s] = testo[i];
        s++;
    }
    free(tmp);
    return new;
}

int main(void)
{
    char*s=codifica_morse("_._. .. ._ ___ / __ ._ __ __ ._");
    return 0;
}

/*
A	• —
B	— • • •
C	— • — •
D	— • •
E	•
F	• • — •
G	— — •
H	• • • •
I	• •
J	• — — —
K	— • —
L	• — • •
M	— —
N	— •
O	— — —
P	• — — •
Q	— — • —
R	• — •
S	• • •
T	—
U	• • —
V	• • • —
W	• — —
X	— • • —
Y	— • — —
Z	— — • •
*/