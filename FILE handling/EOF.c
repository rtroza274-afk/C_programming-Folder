#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while(1) {

        c = fgetc(fp);

        if(feof(fp)) {
            break;
        }

        printf("%c", c);
    }

    fclose(fp);

    return 0;
}