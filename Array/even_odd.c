#include<stdio.h>

int main(){
    int n;
    printf("Enter a size : ");
    scanf("%d",&n);
    int arr[n];
    int count1=0;
    int count2=0;

    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Even numbers:\n");
    for(int i=0; i< n; i++){
        if(arr[i]%2==0){
            printf("%d \n",arr[i]);
            count1++;
        }
    }

    printf("Odd numbers:\n");
    for(int i=0; i< n; i++){
        if(arr[i]%2!=0){
            printf("%d \n",arr[i]);
            count2++;
        }
    }

    printf("Number of odd and even numbers : %d and %d",count2,count1);
     return 0;
}