#include<stdio.h>

int main(){
    float num1,num2;
    char op;      //single character operator

    printf("enter an operator:");
    scanf("%c",&op);

    printf("enter two numbers:");
    scanf("%f %f",&num1,&num2);

    switch(op){
        case '+':
        printf("Rsult =%.2f",num1+num2);
        break;

        case '-':
        printf("Rsult =%.2f",num1-num2);
        break;

        case '*':
        printf("Rsult =%.2f",num1*num2);
        break;

        case '/':
        if(num2!=0)
        printf("Rsult =%.2f",num1/num2);
        else
        printf("cannot be divided by 0");
        break;

        default:
        printf("Invalid operator");

    }
     return 0;
}