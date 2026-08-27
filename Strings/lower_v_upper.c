#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i;
    printf("Enter a string:");
    gets(str);
    //lower to uppercase:

    for(i=0;str[i]!=0;i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    printf("UPPERCASE-D: %s",str);

    //uppercase to lowercase:
    for(i=0;str[i]!=0;i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    printf("\nlowercase-d: %s",str);

     return 0;
}