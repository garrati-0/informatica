#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct Dizionario
{
    char *parola;
    struct Dizionario *next;
};

struct Dizionario *LeggiDaDizionario(char *filename)
{
    if (filename == NULL)
        return NULL;

    FILE *f = fopen(filename, "r");
    if (f == NULL)
        return NULL;

    struct Dizionario *dizionario = NULL;
    struct Dizionario *dizionario_corrente = NULL;
    while (1)
    {
        char parola[32];
        int letti = fscanf(f, "%s", parola);
        if (letti == EOF)
            break;

        struct Dizionario *nuova_parola = malloc(sizeof(struct Dizionario));
        nuova_parola->parola = malloc(strlen(parola) + 1);
        strcpy(nuova_parola->parola, parola);
        nuova_parola->next = NULL;

        if (dizionario == NULL)
            dizionario = nuova_parola;
        else
            dizionario_corrente->next = nuova_parola;

        dizionario_corrente = nuova_parola;
    }

    fclose(f);
    return dizionario;
}

bool vediseinvocabolatio(char *parola, struct Dizionario *dizionario)
{
    if (parola == NULL || dizionario == NULL)
        return false;

    struct Dizionario *dizionario_corrente = dizionario;
    while (dizionario_corrente != NULL)
    {
        if (strcmp(dizionario_corrente->parola, parola) == 0)
            return true;
        dizionario_corrente = dizionario_corrente->next;
    }

    return false;
}

char **CercaCompatibilita(char *parola, struct Dizionario *dizionario,int *n)
{
     if (parola == NULL || dizionario == NULL)
        return false;

    struct Dizionario *dizionario_corrente = dizionario;
    int count=0;
    *n=0;
    char **str=malloc(*n+1*sizeof(char*));
    while (dizionario_corrente != NULL)
    {
       
        for(int i = 0; i < strlen(parola); i++)
        {
            if (i==0 && parola[i] == dizionario_corrente->parola[i])
            {
                break;
            }

            if (i>0 && parola[i] == dizionario_corrente->parola[i])
            {
                count++;
                continue;
            }

           
                
        }
        if(count == strlen(parola)-1)
        {
            str[*n]=malloc(strlen(parola)+1);
            strcpy(str[*n],dizionario_corrente->parola);
            *n=*n+1;
            str=realloc(str,*n+1*sizeof(char*));
        }

        dizionario_corrente = dizionario_corrente->next;
    }  

    return str;//ritorno una stringa 
}


 void stampa(char **str,int num)
    {
        for(int i=0;i<num;i++)
        {
            printf("%s\n",str[i]);
        }
    }


int main(int argc,char *argv[])
{
    struct Dizionario *dizionario = LeggiDaDizionario("res/1000_parole_italiane_comuni.txt");
    char *str = calloc(31, sizeof(char)); // uso la caooloc per fare una striga zero terminata
    printf("inserisci vocabolo\n");
    scanf("%s", str);
    bool esiste = vediseinvocabolatio(str, dizionario);

    if(esiste){
        printf("nessun errore di ortografia\n");
        return 0;
    }

    int n=0;
    char **stcr=CercaCompatibilita(str, dizionario,& n);
    stampa(stcr,n);
    return 0;
}
