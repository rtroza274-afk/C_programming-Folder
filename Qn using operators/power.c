#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the base:");
    scanf("%d",&a);
    printf("Enter the power:");
    scanf("%d",&b); 
    int power = 1;
    int sum =1;
    for(int i=1;i<=b;i++){

        power*=a;  
        sum+=power; 
    }
    printf("%d\n",power);
     printf("%d",sum);
     return 0;
}