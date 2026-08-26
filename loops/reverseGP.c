#include<stdio.h>

int main(){
    float i,n,a=100.00;
    printf("enter a value: ");
    scanf("%f",&n);
    for(i=1.0;i<=n; i++){
        printf("%.2f ",a);
        a/=2.00;
    }
     return 0;
}
//100.00 50.00 25.00 12.50....