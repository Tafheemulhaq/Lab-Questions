#include <stdio.h>

int main()
{
    int i, j, k;
    for ( i = 2; i <= 20; i++)
    {
        for ( j = 1; j <= 10; j++)
        {
            k=i*j;
            printf("%d x %d = %d\n", i, j, k);
        }
        
    }
    
}