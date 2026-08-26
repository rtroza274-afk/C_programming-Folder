#include <stdio.h>

int main() {
    int n, i, j, spaces, stars;

    printf("Enter number of lines (n): ");
    scanf("%d", &n);

    // Upper half (including middle row)
    for (i = 1; i <= n; i++) {
        // print leading spaces
        for (spaces = 1; spaces <= n - i; spaces++) {
            printf(" ");
        }
        // print stars (odd numbers: 1, 3, 5, ...)
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half (mirror, excluding middle row)
    for (i = n - 1; i >= 1; i--) {
        for (spaces = 1; spaces <= n - i; spaces++) {
            printf(" ");
        }
        for (stars = 1; stars <= 2 * i - 1; stars++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}