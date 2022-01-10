#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool IsPalindromoRec(const char *str, int start, int end)
{
    if (start >= end)
        return true;

    bool ris = str[start] == str[end];
    
    if (ris == false)
        return false;

    return IsPalindromoRec(str, start + 1, end - 1);
}

bool IsPalindromo(const char *str)
{
    if (str == NULL)
        return false;

    int len = strlen(str);
    if (len == 0)
        return true;

    if (len % 2 != 0)
        return false;

    return IsPalindromoRec(str, 0, len - 1);
}

int main(void)
{
    const char *str = "osssso";
    bool ris = IsPalindromo(str);
    return 0;
}