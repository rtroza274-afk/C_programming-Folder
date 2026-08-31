#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int sum=0;

    printf("Enter size:");
    scanf("%d",&n);

    int *p;

    p=malloc(n* sizeof(int));

    if(p==NULL){
        printf("Memory allocation failed.");
        return 0;
    }
    printf("Enter elements:");

    for(int i=0; i<n;i++){
        scanf("%d",p+i);
        sum = sum + *(p + i);
    }
    printf("sum=%d\n",sum);
    free(p);

     return 0;
}