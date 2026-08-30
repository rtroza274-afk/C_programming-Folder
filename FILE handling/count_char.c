#include <stdio.h>

int main() {
    FILE *fp;
    char c;
    int count = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while((c = fgetc(fp))!= EOF) {
        count++;
    }

    fclose(fp);

    printf("Number of characters = %d", count);

    return 0;
}