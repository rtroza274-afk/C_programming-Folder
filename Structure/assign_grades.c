#include<stdio.h>
struct student {
    int id;
    char name[20];
    int score;
    char grade;
};
int main(){
    struct student s;

    printf("Enter ID: ");
    scanf("%d", &s.id);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter score: ");
    scanf("%d", &s.score);

    if(s.score > 90) {
        s.grade = 'A';
    }
    else if(s.score > 80) {
        s.grade = 'B';
    }
    else if(s.score > 65) {
        s.grade = 'C';
    }
    else if(s.score > 50) {
        s.grade = 'D';
    }
    else {
        s.grade = 'F';
    }

    printf("\nName: %s\n", s.name);
    printf("Grade: %c\n", s.grade);

     return 0;
}