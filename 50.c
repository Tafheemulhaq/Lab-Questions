#include <stdio.h>

int main()
{
    int a[100][100], n, sum=0, i, j;
    printf("Enter the order of the matrix (NxN): ");
    scanf("%d", &n);
    printf("Enter the elements of the matrix: ");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++) {
            printf("Elements [%d][%d] ", i, j);
            scanf("%d", &a[i][j]); 
            if (i == j)
            {
                sum = sum + a[i][j];
            }
        }
        printf("The sum of the diagonal elements is %d", sum);
    return 0;
}