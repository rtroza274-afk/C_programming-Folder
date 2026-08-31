#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int count=0,i;

    printf("Enter a string:");
    gets(str);

    for(i=0;str[i]!=0;i++){
        if((str[i]>='A'&& str[i]<='Z')||
            (str[i]>='a'&& str[i]<='z')){

                 if(str[i]!='A'&&str[i]!='E'&&
                    str[i]!='I'&&str[i]!='O'&&
                    str[i]!='U'&&
                    str[i]!='a'&&str[i]!='e'&&
                    str[i]!='i'&&str[i]!='o'&&
                    str[i]!='u'){
                        count++;
                    }
                }
        }
        printf("Consonant count: %d",count);
    
     return 0;
}