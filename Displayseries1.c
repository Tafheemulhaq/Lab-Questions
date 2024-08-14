//2 4 8 10 .... (n terms)

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, z;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        z=pow(2, i);
        printf("%d ", z);
    }
    
}