#include<stdio.h>
struct student{
    char name[100];
    int ID;
    float cgpa;
};
int main(){
    struct student s[5];
    int i;
    for(i=0;i<5;i++){
        printf(" Enter the Info of Student %d",i+1);
        printf("\nname: ");
        scanf(" %[^\n]",s[i].name);//add whitespace

        printf("\nID:");
        scanf("%d",&s[i].ID);

        printf("\nCGPA:");
        scanf("%f",&s[i].cgpa);
    }
    for(i=0;i<5;i++){
        printf("\nname:%s",s[i].name);
        printf("\nID:%d",s[i].ID);
        printf("\nCGPA:%f",s[i].cgpa);
    }
     return 0;
}