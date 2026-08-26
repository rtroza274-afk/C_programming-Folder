#include <stdio.h>

int main()
{
    float A[3][5];
    float n;
    int row, col;

    // Read the 3x5 matrix
    printf("Enter elements of the 3x5 matrix:\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("Enter A[%d][%d]: ", row, col);
            scanf("%f", &A[row][col]);
        }
    }

    // Read the decimal number n
    printf("Enter the value of n: ");
    scanf("%f", &n);

    // Print n*A
    printf("\nMatrix n*A:\n");
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("%.2f ", n * A[row][col]);
        }
        printf("\n");
    }

    return 0;
}