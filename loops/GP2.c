#include<stdio.h>
int main(){
int n,i;
int a=3;
printf("enter a value: ");
scanf("%d",&n);
for (i=1; i<=n ; i++){
    printf("%d ",a);
    a*=3;
}
    return 0;
}