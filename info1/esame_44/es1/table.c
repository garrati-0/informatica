#include "stdint.h"

void print_table(char **colnames, uint8_t ncols, uint8_t nrows)
{
    if (ncols == 0 || nrows == 0)
        return;

    for (int i = 0; i < nrows; i++)
    {
        for (int c = 0; c < ncols; c++)
        {
            if (i == 0)
            {
                for (int k = 0; k < ncols; k++)
                {
                    printf("+-------+");
                }
                printf("\n");
                 for (int k = 0; k < ncols; k++){
                printf("|        |");}
            }
        }
    }
}

int main(void)
{
    char **names = {"cat", "dog", "deer", "frog"};
    print_table(names, 4, 2);
    return 0;
}