#include <stdio.h>

int main()
{
    char str[100], newStr[100];
    int i, j, k = 0, found;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
        found = 0;

        // Check if character already exists in newStr
        for(j = 0; j < k; j++)
        {
            if(str[i] == newStr[j])
            {
                found = 1;
                break;
            }
        }

        // Add only if it is not already present
        if(found == 0)
        {
            newStr[k] = str[i];
            k++;
        }
    }

    newStr[k] = '\0';

    printf("String after deleting duplicates: %s", newStr);

    return 0;
}