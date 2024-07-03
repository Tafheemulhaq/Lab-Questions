#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, n, z;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {   
        z=2*i;
        printf("%d ", z);
    }
    
    return 0;
}
