#include <stdio.h>

int main() {
    int rows, cols;
    int i, j, x;
    int found = 0;

    int arr[100][100];

    scanf("%d %d", &rows, &cols);

    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter element to search: ");
    scanf("%d", &x);

    for(i = 0; i < rows; i++) {

        for(j = 0; j < cols; j++) {

            if(arr[i][j] == x) {
                printf("Found at row %d, column %d\n", i, j);
                found = 1;
            }

        }
    }

    if(found == 0) {
        printf("Element not found");
    }

    return 0;
}