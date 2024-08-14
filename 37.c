#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]+1);
    }

    printf("Elements in the array are: ");
    for (i = n; i > 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
