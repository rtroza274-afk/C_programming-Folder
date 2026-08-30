#include<stdio.h>

int main(){
    int c;
    int *pc;
    c=22;
    pc=&c;

    printf("Address of c: %d\n",&c);
    printf("Value of c: %d\n",c);
    printf("Address of pointer: %d\n",pc);
    printf("Value of pointer: %d\n",pc);

    c=11;
    printf("Address of pointer: %d\n",pc);
    printf("Value of pointer: %d\n",*pc);
    *pc=2;
    printf("Address of c: %d\n",&c);
    printf("Value of c: %d\n",c);


     return 0;
}