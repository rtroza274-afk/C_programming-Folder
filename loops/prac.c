#include<stdio.h>

int main(){
/*int n;
int i=1;
printf("Enter a value");
scanf("%d",&n);
    do
    {
        printf("%d ",i);
        i++;
    }
    while(i<=n);*/
////////////////////////
/*int n;
printf("Enter a value:");
scanf("%d",&n);
int i=n;
 do
    {
        printf("%d ",i);
        i--;
    }
    while(i>=0);*/
//////////////////////////
/*
int n;
printf("Enter a value:");
scanf("%d",&n);
int sum=0;
int i=1;
 do
    {
        sum+=i;
        i++;
    }
    while(i<=n);
    
    printf("%d ",sum);
    */
   /////////////////////////
 int n;
printf("Enter a value:");
scanf("%d",&n);
int count=0,dig;
 do
    {
        dig=n%10;
        if(dig==0)
        {count++;}
        n=n/10;
    }
    while(n!=0);
    printf("%d",count);
    
     return 0;
}