#include <stdio.h>

int main() {
    int n, temp;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Step 1: Transpose
    for(int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++) {
            printf("%d ", a[i][j]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n / 2; j++) {

            temp = a[i][j];
            a[i][j] = a[i][n - 1 - j];
            a[i][n - 1 - j] = temp;
        }
    }

    printf("Matrix after 90 degree clockwise rotation:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}