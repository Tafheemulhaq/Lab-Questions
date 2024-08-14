//Swap two nmumbers using functions

#include <stdio.h>
int swap(int, int);
int main(){
    int a, b;
    printf("Enter two numbers a and b: ");
    scanf("%d %d", &a, &b);
    printf("The value of a and b before swaping is (%d, %d)\n", a, b);
    swap(a, b);
}

int swap(int i, int j) {
    // int i, j, c;
    int c;
    c=i;
    i=j;
    j=c;
    printf("The value of a and b after swaping is (%d, %d)", i, j);
}