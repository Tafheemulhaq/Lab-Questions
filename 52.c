#include <stdio.h>

int add(int, int);
int sub(int, int);

int main(){
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("%d + %d = %d\n",a, b, add(a, b));

    printf("%d - %d = %d\n",a, b, sub(a, b));
    
    printf("%d - %d = %d\n",b, a, sub(b, a));
}
int add(int x, int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}