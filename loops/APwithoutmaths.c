#include<stdio.h>

int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    //4 7 10 13 16....n number of terms
    //we are gonna use extra variables
    int a=4;
    for(int i=1; i<=n; i++){
        printf("%d",i);
        a=a+3;
    }
     return 0;
}