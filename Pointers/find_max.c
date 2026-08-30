#include<stdio.h>

int main(){
    int a,b;
    int *p, *q;

    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    p= &a;
    q= &b;

    if(*p>*q)printf("Max= %d\n",*p);

    else printf("Max= %d\n",*q);
    
     return 0;
}