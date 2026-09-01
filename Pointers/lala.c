#include<stdio.h>
//random number selection and value-address

int *getnumber();
int main(){
    int *p;
    p=getnumber();
    printf("Value of *p=%d\n",*p);

     return 0;
}
int *getnumber(){
    static int a;
    a=rand();
    printf("Value of variable=%d\n",a);
    printf("Address of variable=%d\n",&a);
    return &a;
}