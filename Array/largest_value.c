#include<stdio.h>

int main(){
    int n;
    printf("Entersize: ");
    scanf("%d",&n);

    float arr[n],max,min;
    printf("enter %d numbers :",n);
    for (int i=0;i<n;i++){
        scanf("%f",&arr[i]);
    }
    max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("Max MIN=%.2f %.2f",max,min);
     return 0;
}