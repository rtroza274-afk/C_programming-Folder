#include <stdio.h>

int main() {
    int r,c;
    int i,j;
    int even=0,odd=0;
    int arr[100][100];

    scanf("%d %d",&r,&c);

    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {

            scanf("%d", &arr[i][j]);

            if(arr[i][j]%2==0)
                even++;
            else
                odd++;
        }
    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}