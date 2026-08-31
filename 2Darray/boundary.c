#include <stdio.h>

int main() {
    int r, c;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c];

    printf("Enter elements:\n");

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Boundary elements:\n");

    for (int i = 0; i < r; i++) {

        for (int j = 0; j < c; j++) {

            if (i == 0 || i == r - 1 ||
                j == 0 || j == c - 1) {

                printf("%d ", a[i][j]);
            }
            else
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}