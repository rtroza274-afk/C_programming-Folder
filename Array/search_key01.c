#include<stdio.h>

int main(){
    int n,i,x;
    int found=0,count=0;
    int arr[100];
    printf("enter size of the array:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter search key:");
    scanf("%d",&x);
    for (i=0;i<n;i++){
        if(arr[i]== x){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element found!!!");
    }
    else{printf("Element not found!!!");}
    for (i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    printf("\nthe element count is %d times",count);

     return 0;
}