#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    for ( i = 1; i <= 6; i++)
    {
        if (i==2)
        continue;
        else if(i==5)
        break;
        printf("%d", i);
        
    }
    
    return 0;
}
