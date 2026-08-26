#include <stdio.h>

int main() {
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int A[r][c];
    int sum = 0;

    printf("Enter elements of the %dx%d matrix:\n", r, c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            // border element if it's in the first/last row OR first/last column
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
                sum += A[i][j];
            }
        }
    }

    printf("\nSum of main border elements = %d\n", sum);

    return 0;
}