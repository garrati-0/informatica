#include "stdbool.h"
#include "stdlib.h"

bool is_date(const char *s)
{
    if(s==NULL)
    {
        return 0;
    }

    for(size_t i=0;s[i]!=0;i++)
    {
        if(s[i]<='1'||s[i]>='9')
        {
            if(s[i]!='/')
            {
                return 0;
            }
        }
    }

    if(s[2]=='/'&&s[5]=='/'&&s[10]==0)
    {
        return 1;
    }

    return 0;
}

int main(void)
{
    char *str={"xx/12/2000"};
    is_date(str);
    return 0;
}