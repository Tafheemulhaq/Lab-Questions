//factorial using recursion

#include <stdio.h>
int fact(int);
int main(){
    int n, i;

    printf("Enter the number whose factorial you want to find out: ");
    scanf("%d", &n);
    printf("%d", fact(n));
}

int fact(int m){
    if (m == 0 || m == 1)
    {
        return 1;
    }
    
    return m * fact(m-1);
}