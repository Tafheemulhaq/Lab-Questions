#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n, product=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        product=product*i;
    }
    printf("%d", product);
    return 0;
}
