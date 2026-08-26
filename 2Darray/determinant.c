#include <stdio.h>

// Function to get the minor matrix by removing given row and column
void getMinor(int n, int a[n][n], int minor[n][n], int row, int col) {
    int mi = 0;
    for (int i = 0; i < n; i++) {
        if (i == row) continue;   // skip the given row
        int mj = 0;
        for (int j = 0; j < n; j++) {
            if (j == col) continue;   // skip the given column
            minor[mi][mj] = a[i][j];
            mj++;
        }
        mi++;
    }
}

// Recursive function to compute determinant of n x n matrix
int determinant(int n, int a[n][n]) {
    if (n == 1) {
        return a[0][0];
    }
    if (n == 2) {
        return a[0][0] * a[1][1] - a[0][1] * a[1][0];
    }

    int det = 0;
    int sign = 1;
    int minor[n][n];   // oversized but only n-1 x n-1 part used

    for (int j = 0; j < n; j++) {
        getMinor(n, a, minor, 0, j);

        // build a proper (n-1)x(n-1) array for recursion
        int sub[n - 1][n - 1];
        for (int x = 0; x < n - 1; x++)
            for (int y = 0; y < n - 1; y++)
                sub[x][y] = minor[x][y];

        det += sign * a[0][j] * determinant(n - 1, sub);
        sign = -sign;
    }

    return det;
}

int main() {
    int r, c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    if (r != c) {
        printf("Determinant is not defined for a non-square matrix.\n");
        return 0;
    }

    int n = r;
    int A[n][n];

    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int det = determinant(n, A);
    printf("\nDeterminant = %d\n", det);

    return 0;
}