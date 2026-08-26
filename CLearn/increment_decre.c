#include<stdio.h>

int main(){
    int x=5;
    int y=6;
    x=y;
    x;//secondly,
    y++;//first,y=y+1
    printf("%d\n",x);
    printf("%d",y);
     return 0;
}