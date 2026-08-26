#include <stdio.h>
#include <ctype.h>

int main()
{
    char arr[100], output[100];
    int i, j = 0;

    printf("Enter a string: ");
    gets(arr);

    
    for(i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i] == 'a' || arr[i] == 'e' ||
           arr[i] == 'i' || arr[i] == 'o' ||
           arr[i] == 'u' ||
           arr[i] == 'A' || arr[i] == 'E' ||
           arr[i] == 'I' || arr[i] == 'O' ||
           arr[i] == 'U')
        {
            output[j] = toupper(arr[i]);
            j++;
        }
    }

    
    for(i = 0; arr[i] != '\0'; i++)
    {
        if(!(arr[i] == 'a' || arr[i] == 'e' ||
             arr[i] == 'i' || arr[i] == 'o' ||
             arr[i] == 'u' ||
             arr[i] == 'A' || arr[i] == 'E' ||
             arr[i] == 'I' || arr[i] == 'O' ||
             arr[i] == 'U'))
        {
            output[j] = tolower(arr[i]);
            j++;
        }
    }

    output[j] = '\0';

    printf("Output: %s", output);

    return 0;
}