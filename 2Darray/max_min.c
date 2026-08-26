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

    int max = arr[0][0];
    int min =arr [0][0];

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {

            if(arr[i][j] > max) {
                max = arr[i][j];
            }

        }
    }
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {

            if(arr[i][j] < min) {
                min = arr[i][j];
            }

        }
    }

    printf("Maximum = %d", max);
    printf("\nMinimum = %d", min);

    return 0;
}