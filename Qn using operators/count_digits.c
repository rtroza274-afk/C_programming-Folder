#include<stdio.h>

int main(){
    int n;
    int i;
    printf("Enter a value: ");
    scanf("%d",&n);
    int count=0;
    for(i=1; n!=0;count++){
        n/=10;
    }
    printf("%d",count);
     return 0;
}