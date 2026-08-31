#include<stdio.h>

int main(){
    int n,count=0;
    
    printf("Enter number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elments:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n;i++){
        int prime=1;
        if(a[i]<2){
            prime=0;
        }
        else{
            for(int j=2;j<a[i];j++){
                if(a[i]%j==0){
                    prime=0;
                    break;
                }
            }
        }
        if(prime==1){
            count++;
            printf("%d ",a[i]);

        }
    }
    printf("Number of Prime numbers= %d\n",count);

     return 0;
}