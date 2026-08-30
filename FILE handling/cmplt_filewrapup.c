#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    char content[100];
    int lines = 0;

    // Ask the user for the filename
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open the file in read mode
    fp = fopen(filename, "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    // Read the file line by line
    while (fgets(content, 100, fp) != NULL) {
        printf("%s", content);
        lines++;
    }

    // Close the file
    fclose(fp);

    // Display total number of lines
    printf("\nTotal number of lines = %d\n", lines);

    return 0;
}
