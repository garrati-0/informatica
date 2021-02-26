#include <stdlib.h>
#include <string.h>
void azzerastr(char *s)
{
    for(size_t i=0;s[i]!=0;i++)
    {
        s[i]=0;
    }
}
char *trovapassword(size_t parole,char **str,char *password)
{
    char *new=calloc(200,sizeof(char));

    for(size_t i=0;i<parole;i++)
    {
        for(size_t j=0;j<parole;j++)
        {
            strcat(new,str[i]);
            strcat(new,str[j]);
            if(strcmp(new,password)==0)
            {
                return new;
            }else{
                azzerastr(new);
            }
        }
    }
}


int main(void)
{
    char *str[]={"enrico","garrapa","09","12","2000","enri"};
    char pass[]={"enrigarrapa"};
    size_t n=6;
    trovapassword(n,str,pass);
}