#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("%d", sum);
    return 0;
}
