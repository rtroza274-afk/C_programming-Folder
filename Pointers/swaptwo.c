#include<stdio.h>

    void swap(int *x, int *y){
        int temp;

        temp=*x;
        *x=*y;
        *y=temp;
    }
    int main(){
        int a=10,b=20;
        printf("Before:\n");
        printf("a=%d\n",a);
        printf("b=%d\n",b);

        swap(&a,&b);

        printf("After:\n");
        printf("a = %d\n",a);
        printf("b = %d\n",b);

    
     return 0;
}