#include<stdio.h>
struct student {
    char name[100];
    long long ID;
    char major[20];
};
int main(){
    struct student s1;
    printf("Enter name:");
    scanf("%[^\n]",s1.name);//to print after whitespaces as well and add a new line

    printf("Enter ID:");
    scanf("%lld",&s1.ID);

    printf("Enter major:");
    scanf("%s",s1.major);

    printf("\nstudent information:\n");
    printf("\nStudent name: %s",s1.name);
    printf("\nStudent ID: %lld",s1.ID);
    printf("\nStudent major: %s",s1.major);
    
     return 0;
}