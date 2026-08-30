#include<stdio.h>

int main(){
    int x=10;
    int *p=&x;

    printf("Value of x=%d %d\n",x,*p);
    printf("Address of x=%d %d\n",&x,p);
    
    printf("Address of x = %p\n", (void*)&x);
    printf("Value stored in p = %p\n", (void*)p);

     return 0;
}