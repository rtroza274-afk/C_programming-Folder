#include<stdio.h>

int main(){
    // int arr[5];   //5 spaces?what will be the name?
    // printf("enter the first element:");
    // scanf("%d",&arr[4]);//not usable


    // arr[4] = 100; //{2,4,6,8,100}
    // printf("%d",arr[-1]);//warning not negative input
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter element %d \n",i+1);
        scanf("%d",&arr[i]);
    }
    for( int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}