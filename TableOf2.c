#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    printf("Upto where do you want the table of 2: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("2 x %d = %d\n", i, 2*i);
    }
    
    return 0;
}
