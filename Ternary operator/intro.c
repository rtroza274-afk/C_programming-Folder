#include<stdio.h>

int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);

    //if(n%2==0)
    //printf("Even number");
    //else
   // printf("odd number");

   //ternary operator

   n%2==0?printf("Even number"):printf("Odd number");
     return 0;
}