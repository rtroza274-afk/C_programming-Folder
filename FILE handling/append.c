#include <stdio.h>

int main() {
    FILE *fp;
    char sentence[100];

    fp = fopen("data.txt", "a");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    printf("Enter a sentence: ");
    scanf(" %[^\n]", sentence);

    fprintf(fp,"%s\n",sentence);

    fclose(fp);

    printf("Sentence appended successfully.");

    return 0;
}