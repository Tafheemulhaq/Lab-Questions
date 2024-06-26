#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, fact=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("%d! is %d", i-1,  fact);
    return 0;
}
