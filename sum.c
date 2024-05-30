//CSE-23-70

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    sum=x+y;
    printf("Sum of %d and %d is %d", x, y, sum);
    return 0;
}
