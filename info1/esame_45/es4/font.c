#include <string.h>
#include <stdlib.h>

 char* change_font(const char *s)
 {
     if(s==NULL)
     return NULL;
/*
*SEI  ->    6
*PER  ->    X
*A    ->    4
*E    ->    3
*I    ->    1
*O    ->    0
*S    ->    5
*/
     size_t dim=strlen(s);
     char *new=malloc(dim+1*sizeof(char));
     size_t k=0;
     for(size_t i=0;i<=dim;i++)
     {
         if(s[i]=='A')
         {
              new[k]='4';
              k++;
              continue;
         }
          if(s[i]=='E')
         {
             new[k]='3';
             k++;
             continue;
         }
          if(s[i]=='I')
         {
             new[k]='1';
             k++;
             continue;
         }
          if(s[i]=='O')
         {
             new[k]='0';
             k++;
             continue;
         }
          if(s[i]=='S'&&s[i+1]=='E'&&s[i+2]=='I')
         {
             new[k]='6';
             k++;
             i=i+2;
             continue;
         }
          if(s[i]=='S')
         {
             new[k]='5';
             k++;
             continue;
         }
         if(s[i]=='P'&&s[i+1]=='E'&&s[i+2]=='R')
         {
             new[k]='X';
             k++;
             i=i+2;
             continue;
         }

         new[k]=s[i];
         k++;
     }
     
     new=realloc(new,k+2*sizeof(char));
     return new;
 }

 int main(void)
 {
     char *s={"QUATTRO"};
     change_font(s);
     return 0;
 }