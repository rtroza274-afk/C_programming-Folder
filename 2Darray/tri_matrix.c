#include <stdio.h>

void printUpperLeft(int n, int a[n][n]) {
    printf("\nUpper Left Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j < n - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printLowerRight(int n, int a[n][n]) {
    printf("\nLower Right Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j > n - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printUpperRight(int n, int a[n][n]) {
    printf("\nUpper Right Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printLowerLeft(int n, int a[n][n]) {
    printf("\nLower Left Triangle:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printDiagonal(int n, int a[n][n]) {
    printf("\nDiagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}

void printReverseDiagonal(int n, int a[n][n]) {
    printf("\nReverse Diagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
}
void printBoundaryMatrix(int n, int a[n][n]){
    printf("\n bounday Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             if (i == 0 || i == n - 1 ||
                j == 0 || j == n - 1) {

                printf("%d ", a[i][j]);
            }else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the size n: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printUpperLeft(n, A);
    printLowerRight(n, A);
    printUpperRight(n, A);
    printLowerLeft(n, A);
    printDiagonal(n, A);
    printReverseDiagonal(n, A);
    printBoundaryMatrix(n,A);

    return 0;
}