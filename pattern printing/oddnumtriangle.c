#include<stdio.h>

int main(){
    int n;
    printf("ENter a value;");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        a+=2;
        printf("\n");
    }
     return 0;
}