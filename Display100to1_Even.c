#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for ( i = 100; i > 0; i--)
    {
        printf("%d ", i);
        i--;
    }
    
    return 0;
}
