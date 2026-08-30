#include <stdio.h>

int main() {
    int a[100], n;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    p = a;

    printf("Array in reverse order:\n");

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(p + i));
    }

    return 0;
}