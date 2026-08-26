#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter A,B,C: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf(" A is greatest");
        else
        printf("C is greatest");
    }
    else{
        if(b>c)// b>a
        printf("B is greatest");
        else{
            printf("C is greatest");
        }
    }
     return 0;
}