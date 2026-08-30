#include<stdio.h>

void printnum(int *ptr,int len);

int main(){
    int a[4]={4,10,1,5};
    printnum(a,4);
    return 0;
}
void printnum(int *ptr, int len){
    int i;
    for(i=0;i<len;i++){
        printf("(ptr+%d)=%d\n",i,*(ptr+i));
        printf("ptr[%d]= %d \n",i, ptr[i]);//same
        
    }
}