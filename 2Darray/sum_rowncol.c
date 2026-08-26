#include <stdio.h>

int main() {
    int rows, cols;
    int i, j;
    int arr[100][100];

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < rows; i++) {

        int sum = 0;

        for(j = 0; j < cols; j++) {
            sum = sum + arr[i][j];
        }

        printf("Row %d sum = %d\n", i, sum);
    }
        for(j = 0; j < cols; j++) {

        int sum = 0;

        for(i = 0; i < rows; i++) {
            sum = sum + arr[i][j];
        }

        printf("Column %d sum = %d\n", j, sum);
    }

    return 0;
}