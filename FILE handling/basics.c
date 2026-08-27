#include<stdio.h>
//create file and write data into it

int main(){
    FILE *fp;
    fp=fopen("data.txt","w");

    if(fp==NULL){
        printf("File couldnt be opened.");
        return 1;
    }
    fprintf(fp, "Name: Roza \n");
    fprintf(fp, "ID:1234\n");
    fprintf(fp,"Age:20\n");

    fclose(fp);

    printf("Data written successfully");
    
     return 0;
}