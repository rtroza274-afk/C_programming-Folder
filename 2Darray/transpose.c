#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Transpose:\n");

    for(j = 0; j < c; j++) {
        for(i = 0; i < r; i++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}