#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, r;
    printf("Enter the number: ");
    scanf("%d", &num);

    while(num != 0) {
    num = num/10;
    r=num%10;
    printf("%d", r+1);
    }  
    return 0;
}
