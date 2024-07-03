#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int i, n, ans;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("2 ");
    ans = 2;
    for ( i = 1; i <= n-1; i++)
    {
        ans=pow(ans, 2);
        printf("%d ", ans);
    }
    
    return 0;
}
