#include<stdio.h>
#include<string.h>
// string variable
int main(){
    char name[15];
    gets(name); // takes multi-word string user input
    printf("\n %s\n", name); // print string
    // will avoid newline or space and take next string input
    getchar();
    scanf("%s", name); // single-word string user input
    puts(name); // An alternative to printf for strings
return 0;
}