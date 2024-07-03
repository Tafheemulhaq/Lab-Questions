#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; i <= 5; i++)
        {
            if (i+j>=6)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
