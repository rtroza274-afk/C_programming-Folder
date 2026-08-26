#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter a value");
    scanf("%d",&n);//1234
    int sum=0;
    int lastdig=0;
    for(i=0; n>0;n/=10){
        lastdig=n%10;//4
        
        if (lastdig%2==0){
        sum+=lastdig;//0+4=4
        //123
        }
    }

    printf("%d",sum);
     return 0;
}