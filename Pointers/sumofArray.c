#include <stdio.h>

int main() {

    int n;
    int sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    int *p = arr;

    printf("Enter elements: ");

    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
        sum = sum + *(p + i);
    }

    

    printf("Sum = %d", sum);

    return 0;
}