#include <stdio.h>

int main() {
    int n, i, j;
    int arr[100][100];
    int identity = 1;

    printf("Enter size: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {

            if(i == j) {
                if(arr[i][j] != 1) {
                    identity = 0;
                }
            }
            else {
                if(arr[i][j] != 0) {
                    identity = 0;
                }
            }
        }
    }

    if(identity == 1)
        printf("Identity Matrix");
    else
        printf("Not an Identity Matrix");

    return 0;
}