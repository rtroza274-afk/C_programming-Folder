#include <stdio.h>
#include <limits.h>

int main(){
    int arr[100], n;
    int smallest = INT_MAX;
    int secSmallest = INT_MAX;
    int largest = INT_MIN;
    int secLargest = INT_MIN;

    printf("Enter the size of array:");
    scanf("%d",&n);

    printf("Enter %d elements:\n", n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < smallest){
            secSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i]<secSmallest && arr[i] != smallest){
            secSmallest=arr[i];
         
        if(arr[i]>largest){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secLargest && arr[i] != largest){
            secLargest=arr[i];
        }
    }printf("2nd smallest = %d\n", secSmallest);
    printf("2nd largest = %d\n", secLargest);

    return 0;
}