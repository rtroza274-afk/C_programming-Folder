#include<stdio.h>
//initialize at the same time of declaration
 struct student{
    char name[100];
    int ID;
    char major[20];
 };
int main(){
    struct student s1={"raiana roza",123,"CSE"};

    printf("Name: %s\n",s1.name);
    printf("STUDENT ID: %d\n",s1.ID);
    printf("Major:%s\n",s1.major);

     return 0;
}