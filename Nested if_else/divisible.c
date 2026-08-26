#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    if((n%5==0 || n%3==0) && n%15 !=0){
        printf("The number is divisible by 5 or 3 but not 15");

    }else{
        printf("Invalid");
    }
     return 0;
}