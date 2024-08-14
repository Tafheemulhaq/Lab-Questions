#include <stdio.h>
int main(int argc, char const *argv[])
{
    float sum = 1, i=1, n;
    printf("Enter the number of terms: ");
    scanf("%f", &n);
    while (i <= n-1)
    {
        sum = sum + (1/(2*i));
        i++;
    }
    
    printf("%f", sum);
    return 0;
}
