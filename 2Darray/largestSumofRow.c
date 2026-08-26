#include <stdio.h>

int main(){
    int r,c,i,j;
    int arr[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int largestSum=0;
    int rowNumber=0;

    for(i=0;i<r;i++) {
        int sum=0;
        for(j=0;j<c;j++) {
            sum=sum+arr[i][j];
        }

        if(i==0 ||sum>largestSum) {
            largestSum=sum;
            rowNumber=i;
        }
    }

    printf("Row %d has the largest sum = %d",
           rowNumber,largestSum);

    return 0;
}