#include<stdio.h>
#include<string.h>
int main()
{
FILE *fp;
fp=fopen("test.txt","r");
if(fp != NULL)
{
printf("File opened");
fclose(fp);
}
else{ printf("Error");
}
fp=fopen("test.txt","a");
fprintf(fp,"Added stuffs");
fclose(fp);
return 0;
}