#include<stdio.h>

int main(){
    int n;
    printf("Enter the value:");
    scanf("%d",&n);
    int a= 1;
    int b =1;
    int sum= 0;if (n==1 || n==2)
    printf("1");
    else {
        for (int i=1;i<=n-2;i++){
            
            sum= a + b ;
            a=b;
            b=sum;
        }
        printf("%d",sum);
    }
     return 0;
}