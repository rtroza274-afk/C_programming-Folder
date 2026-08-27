#include<stdio.h>

int main(){
     FILE *fp;
    char content[50];

    fp = fopen("data.txt", "r");

    if(fp == NULL) {
        printf("File could not be opened.");
        return 1;
    }

    while(fgets(content, 50, fp) != NULL) {
        printf("%s", content);
    }

    fclose(fp);
     return 0;
}