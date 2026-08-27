#include<stdio.h>
struct student{
    char name[100];
    int ID;
    int score;
};
int main(){
    struct student s[100];
    int i,n,highest;

    printf("Enter number of students:");
    scanf("%d", &n);
    for (i=0; i<n;i++){
        printf("Enter name:%d: ",i+1);
        scanf(" %[^\n]",s[i].name);

        printf("Enter ID: ");
        scanf("%d",&s[i].ID);

        printf("Enter score: ");
        scanf("%d",&s[i].score);
    }
    highest=0;
    for(i=0;i<n;i++){
        if(s[i].score>s[highest].score){
            highest=i;
        }
    }
    printf("\nstudent with highest score:");
    printf("\nName: %s",s[highest].name);
    printf("\nID: %d",s[highest].ID);
    printf("\nScore: %d",s[highest].score);
     return 0;
}