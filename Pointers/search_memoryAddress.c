#include<stdio.h>

int main(){
    int n,num;
    printf("Enter the size:");
    scanf("%d",&n);

    int a[n];
    int *p=a;

    printf("Enter elements:");

    for (int i=0;i<n;i++){
        scanf("%d",p+i);
    }
    printf("enter the number to search: ");
    scanf("%d",&num);

    int found =0;

    for(int i=0; i<n; i++){
        
            if (*(p+i)==num){

                printf("Number found at index %d \n",i);
                printf("Memory address:%d\n",p+i);
                found=1;
                
            }
            
        }
        if (found==0){
            printf("Number Not Found!!");
        }

     return 0;
}