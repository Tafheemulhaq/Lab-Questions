//CSE-23-70

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    long int x, y, z;

    printf("Enter an integer: ");
    scanf("%ld", &x);

    printf("Enter the power you want to assign to %ld:\n", x);
    scanf("%ld", &y);

    z=pow(x,y);

    printf("The result of %ld^%ld=%ld\n", x, y, z);

    //Size of

    printf("The size of an integer is %d\n", sizeof(int));
    printf("The size of a float is %d\n", sizeof(float));
    printf("The size of a double is %d\n", sizeof(double));
    printf("The size of a char is %d\n", sizeof(char));
    printf("The size of a long is %d\n", sizeof(long));
    printf("The size of a long long is %d\n", sizeof(long long));
    printf("The size of a short is %d\n", sizeof(short));
    printf("The size of a long double is %d\n", sizeof(long double));
    printf("The size of a long long int is %d\n", sizeof(long long int));
    printf("The size of a long int is %d\n", sizeof(long int));
    printf("The size of a short int is %d\n", sizeof(short int));
    printf("The size of a signed char is %d\n", sizeof(signed char));
    printf("The size of a unsigned char is %d\n", sizeof(unsigned char));
    printf("The size of a signed int is %d\n", sizeof(signed int));
    printf("The size of a unsigned int is %d\n", sizeof(unsigned int));
    printf("The size of a signed long is %d\n", sizeof(signed long));
    printf("The size of a unsigned long is %d\n", sizeof(unsigned long));
    printf("The size of a signed short is %d\n", sizeof(signed short));
    printf("The size of a unsigned short is %d\n", sizeof(unsigned short));
    printf("The size of a signed long long is %d\n", sizeof(signed long long));
    printf("The size of a unsigned long long is %d\n", sizeof(unsigned long long));
    printf("The size of a signed long int is %d\n", sizeof(signed long int));
    printf("The size of a unsigned long int is %d\n", sizeof(unsigned long int));
    return 0;
}
