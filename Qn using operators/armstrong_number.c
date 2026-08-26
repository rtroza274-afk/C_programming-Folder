#include <stdio.h>

int main() {
    int a, b, digit, sum;

    printf("Armstrong numbers from 1 to 500 are:\n");

    for (a = 1; a <= 500; a++) {
        b = a;
        sum = 0;

        while (b > 0) {
            digit = b % 10;
            sum = sum + (digit * digit * digit);
            b = b / 10;
        }

        if (sum == a) {
            printf("%d ", a);
        }
    }

     return 0;
}