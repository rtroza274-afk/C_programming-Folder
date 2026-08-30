#include<stdio.h>
#include <stdlib.h>
int main(){

    int *p;

    p=malloc(5*sizeof (int));

    if(p==NULL){
        printf("Memory allocation Failed!");
        return 1;
    }
    free(p);
    return 0;
}