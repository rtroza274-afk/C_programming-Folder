#include<stdio.h>
#include<string.h>

int main(){
    int length;
    char str[100];

    printf("Enter a string:");
    gets(str);
    length=strlen(str);
    printf("length of the string is:%d",length);    
    
     return 0;
}