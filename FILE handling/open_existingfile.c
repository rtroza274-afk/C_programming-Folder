#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("data.txt","r");

    if(fp== NULL){
        printf("The file is not there");
    }
    else{
        printf("File succesfully opened.");
        fclose(fp);
    }
     return 0;
}