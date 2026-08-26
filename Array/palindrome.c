#include<stdio.h>

int main(){
    int n,i,palindrome=1;
    printf("Enter size:");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<(n/2);i++){
        if(arr[i]!=arr[n-1-i])
        palindrome=0;
        break;
    }
    if(palindrome==1)printf("Palindrome");
    else printf("Not palindrome");
     return 0;
}