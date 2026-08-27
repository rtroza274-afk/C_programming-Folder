#include<stdio.h>

int main(){
    FILE *input;
    FILE *output;

    char name[50];
    int age;

    input= fopen("input.txt","r");

    if(input == NULL){
        printf("Input file couldnt be opened.");
        return 1;
    }
    output=fopen("output.txt","w");

    if(output== NULL){
        printf("Output file couldnt be opened.");
        fclose(input);
        return 1;
    }
    
    fscanf(input,"%s %d",name,&age);

    fprintf(output,"%s %d\n",name,age);

     return 0;
}