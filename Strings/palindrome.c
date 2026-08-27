#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int i,pali=1,length;

    printf("Enter a string:");
    gets(str);

    length=strlen(str);
    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-1-i]){
            pali=0;
            break;
        }
    }
    if(pali==1){
        printf("PALINDROME!!!");
    }
    else{
        printf("Not palindrome!!");
    }
     return 0;
}