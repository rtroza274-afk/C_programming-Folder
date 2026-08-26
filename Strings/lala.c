#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;

    printf("Enter a string: ");
    gets(str);

    for(i = 0; str[i] != '\0'; i++)
    {
     
        if(str[i] == ' ')
            continue;

        count = 0;

        for(j = 0; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }

        
        int already = 0;

        for(j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                already = 1;
                break;
            }
        }

        if(already == 0)
        {
            printf("%c = %d\n", str[i], count);
        }
    }

    return 0;
}