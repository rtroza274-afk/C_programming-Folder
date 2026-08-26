#include<stdio.h>

int main(){
    int i, n;
    printf("Enter a value:");
    scanf("%d",&n);//33
    int lastdig;
    int count=0;
    for (i=1;n!=0;i++)
    {
        lastdig=n%10;//3
        count+=lastdig;    //0
        n/=10;
    }
    printf("%d\n",count);
     return 0;
}