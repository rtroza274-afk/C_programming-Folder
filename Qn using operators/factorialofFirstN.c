#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter of a value:");
    scanf("%d",&n);
    int product=1;
    for(i=1;i<=n;i++){
        product*=i;
        printf("%d\n",product);
    }
     return 0;
}