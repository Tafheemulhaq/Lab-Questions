#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i, n;
    for ( i = 1; i <= 100; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }
        else
        printf("");
    }
    
    return 0;
}
