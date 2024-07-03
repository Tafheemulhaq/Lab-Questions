#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}
