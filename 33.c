#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j;
    for ( i = 1; i <= 4; i++)
    {
        for ( j = 1; j <= 4; j++)
        {
            if (i+j >= 5)
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
