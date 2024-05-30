//CSE-23-70

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, r1, r2;
    printf("Enter the coefficients: ");
    scanf("%d %d %d", &a, &b, &c);

    d=(b*b)-(4*a*c);
    if (d==0)
    {
        r1=(-b)/(2*a);
        printf("The roots are equal and are equal to %d\n", r1);
    }
    else if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("The roots distinct and are equal to %d and %d\n", r1, r2);
    }
    else 
    {
        printf("The roots are imaginary\n");
    }
    return 0;
}
