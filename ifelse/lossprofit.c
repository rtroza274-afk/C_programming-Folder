#include<stdio.h>

int main(){
    int sprice,cprice;
    printf("Enter the selling price: ");
    scanf("%d",&sprice);
     printf("Enter the cost price: ");
    scanf("%d",&cprice);
    if(sprice>cprice){
        printf("Profit");
    }
    else if (cprice>sprice){
        printf("loss");
    }
    else{
        printf("No loss or profit");
    }
     return 0;
}