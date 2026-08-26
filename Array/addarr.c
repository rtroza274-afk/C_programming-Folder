#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n],b[n],c[n];

    printf("Enter the values Array 01:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
     printf("Enter the values Array 02:");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    printf("Sum:");
    for(int i=0;i<n;i++){
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }

     return 0;
}