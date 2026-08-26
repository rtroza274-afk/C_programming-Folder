#include <stdio.h>

int main()
{
    char str[100];
    int freq[256] = {0};
    int i;
    int max = 0, second = 0;
    char maxChar, secondChar;

    printf("Enter a string: ");
    gets(str);


    for(i = 0; str[i] != '\0'; i++)
    {
        freq[(unsigned char)str[i]]++;
    }


    for(i = 0; i < 256; i++)
    {
        if(freq[i] > max)
        {
            max = freq[i];
            maxChar = i;
        }
    }

   
    for(i = 0; i < 256; i++)
    {
        if(freq[i] < max && freq[i] > second)
        {
            second = freq[i];
            secondChar = i;
        }
    }

    if(second == 0)
        printf("No second most frequent character.");
    else
        printf("Second most frequent character = %c\nFrequency = %d",
               secondChar, second);

    return 0;
}