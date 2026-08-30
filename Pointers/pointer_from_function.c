#include<stdio.h>
#include<stdlib.h>
int *getrandom(){
    static int j;
    j=rand()%10;
    printf("Value of j: %d \n",j);
    printf("Address of j: %d\n",&j);

    return &j;
}


int main(){
    int *p;
    p=getrandom();
    printf("Address of *p: %d\n",p);
    printf("Value of *p:%d\n",*p);
    
     return 0;
}