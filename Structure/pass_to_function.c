#include<stdio.h>
struct student{
    char name[100];
    int id;
};
void display(struct student s1){
    printf("%s\n",s1.name);
    printf("%d\n",s1.id);
}
int main(){
    struct student s;

    printf("Name:");
    scanf(" %[^\n]",s.name);

    printf("ID:");
    scanf("%d",&s.id);

    display(s);
     return 0;
}