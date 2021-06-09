#include <stdint.h>
#include <string.h>

 void hexstring2vec(const char *s, uint8_t out[8])
 {
     if(s==NULL)
     return;

    uint8_t h=0;
     size_t dim=strlen(s)/2;
     size_t k=0;
     for(size_t  i=0;i<16;i++)
     {
         out[i]=0x00;
     }
     for(size_t i=0;s[i]!=0;i++)
     {
         if(s[i]>='0'&&s[i]<='9')
         {
             h=((s[i]-48)*10)+(s[i+1]-48);
             i++;
         }
         if(s[i]>='A'&&s[i]<='Z')
         {
               h=((s[i]-55)*10)+(s[i+1]-55);
               i++;
         }
         out[k]=h;
         k++;
     }

 }

 int main(void)
 {
     uint8_t a[8];
     hexstring2vec("12AB34CD56EF7890",a);
     return 0;
 }
