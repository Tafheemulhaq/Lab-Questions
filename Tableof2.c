#include <stdio.h>

int main()
{
    int i, n;
    printf("Upto which number should the table be\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("2 x %d = %d\n", i, 2*i);
    }
    
}