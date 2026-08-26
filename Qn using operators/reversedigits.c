#include<stdio.h>

int main(){
    int n;
    int i;

printf("Enter a value :");
scanf("%d",&n);
 int r=0;
int lastdig=0;
int count=0;
for (i=1;n>0;i++)
{
    r*=10;
    r=r+n%10;
    lastdig=n%10;//3
    count+=lastdig;  
    n=n/10;
}
printf("%d\n",r);
printf("%d",count);
     return 0;
}