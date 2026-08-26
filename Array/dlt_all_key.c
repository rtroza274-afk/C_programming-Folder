#include <stdio.h>

int main()
{
    int n, key, i, j;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter search key: ");
    scanf("%d", &key);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            for(j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }

            n--;
            i--;    // check the same index again
        }
    }

    printf("Array after deletion: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}