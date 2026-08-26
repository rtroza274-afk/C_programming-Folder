#include<stdio.h>

int main(){
    int r,c,i,j,sum=0;
    printf("Enter row:");
    scanf("%d",&r);
    printf("Enter column:");
    scanf("%d",&c);
    int a[100][100];

    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
    }
    for( i=0;i<r;i++){
        for( j=0;j<c;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("%d",sum);
     return 0;
}