#include <stdio.h>

int main()
{
    int arr[100], result[100];
    int n, i, j;
    int min, max;
    int k;
    int maxIndex;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    min = arr[0];
    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] < min)
            min = arr[i];

        if(arr[i] > max)
            max = arr[i];
    }

    k = min;

    
    maxIndex = -1;

    for(i = 0; i < n; i++)
    {
        if(arr[i] == max)
        {
            maxIndex = i;
            break;
        }
    }

    
    for(i = 0; i < k; i++)
    {
        if(i == maxIndex)
            break;
    }

    if(maxIndex >= 0 && maxIndex < k)
        k = maxIndex;

    for(i = 0; i < k; i++)
    {
        result[i] = arr[k - 1 - i];
    }

    
    j = k;

    for(i = k; i < n; i++)
    {
        if(arr[i] != max)
        {
            result[j] = arr[i];
            j++;
        }
    }

    
    result[j] = max;

    printf("Output array: ");

    for(i = 0; i <= j; i++)
    {
        printf("%d ", result[i]);
    }

    return 0;
}