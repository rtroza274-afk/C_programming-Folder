#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if((n>99 && n<1000)||(n<-99 && n>-1000)){
        printf("It is a three digit number");
     }
    else{
        printf("it is not");
    }
     return 0;
}