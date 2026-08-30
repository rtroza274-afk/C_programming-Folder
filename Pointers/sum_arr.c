#include<stdio.h>
void sumarray(int *a,int *b,int *c,int n){
    for(int i=0; i<n;i++){
        *(c+i)=*(a+i)+*(b+i);
    }
    printf("sum of arrays:\n");
    for (int i=0;i<n;i++){
        printf("%d",*(c+i));
    }
}
int main(){
    int a[5],b[5],c[5];

    printf("Enter 5 elements for first array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 5 elements for second array:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    sumarray(a,b,c,5);

     return 0;
}