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
            if (A[i][j] % 2 == 0) {
                sum += A[i][j];
            }
        }
    }

    printf("\nSum of even numbers = %d\n", sum);

    return 0;
}