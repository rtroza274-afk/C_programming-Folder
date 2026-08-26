#include<stdio.h>

int main(){
    int n,k,i;
    printf("Enter a size: ");
    scanf("%d",&n);

    int arr[n];
    printf("ENTER ELEMENTS:");
    for(int i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter an index:");
    scanf("%d",&k);
    
    for(i=k; i<n-1 ;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
     return 0;
}