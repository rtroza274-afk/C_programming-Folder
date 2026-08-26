#include <stdio.h>

int main() {
    int r, c, i, j;
    int arr[100][100];

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }

    int largestSum=0;
    int columnNumber=0;

    for(j=0;j<c;j++) {

        int sum=0;

        for(i=0;i<r;i++) {
            sum=sum+arr[i][j];
        }

        if(j==0 || sum>largestSum) {
            largestSum=sum;
            columnNumber=j;
        }
    }

    printf("Column %d has the largest sum = %d",
           columnNumber, largestSum);

    return 0;
}