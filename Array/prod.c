#include<stdio.h>

int main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);

    int a[n],b[n],c[n];
    printf("Enter 1st array:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     printf("Enter 2nd array:");
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=a[i]*b[i];
        printf("%d * %d = %d\n",a[i],b[i],c[i]);
    }

     return 0;
}