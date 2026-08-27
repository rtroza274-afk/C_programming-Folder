#include <stdio.h>

struct student {
    int ID;
    char name[50];
    float score;
    char grade;
};

void calculateGrade(struct student s[], int n) {
    int i;

    for(i = 0; i < n; i++) {

        if(s[i].score > 90)
            s[i].grade = 'A';

        else if(s[i].score > 80)
            s[i].grade = 'B';

        else if(s[i].score > 65)
            s[i].grade = 'C';

        else if(s[i].score > 50)
            s[i].grade = 'D';

        else
            s[i].grade = 'F';
    }
}

int main() {

    struct student s[100];

    int n, i;
    int highest = 0;
    int searchID;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // 1. Take information
    for(i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &s[i].ID);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter score: ");
        scanf("%f", &s[i].score);
    }

    // 2. Calculate grades
    calculateGrade(s, n);

    // 3. Display all students
    printf("\n--- All Students ---\n");

    for(i = 0; i < n; i++) {

        printf("\nID: %d\n", s[i].ID);
        printf("Name: %s\n", s[i].name);
        printf("Score: %.2f\n", s[i].score);
        printf("Grade: %c\n", s[i].grade);
    }

    // 4. Find highest score
    for(i = 1; i < n; i++) {

        if(s[i].score > s[highest].score) {
            highest = i;
        }
    }

    printf("\n--- Highest Scoring Student ---\n");
    printf("ID: %d\n", s[highest].ID);
    printf("Name: %s\n", s[highest].name);
    printf("Score: %.2f\n", s[highest].score);
    printf("Grade: %c\n", s[highest].grade);

    // 5. Search by ID
    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < n; i++) {

        if(s[i].ID == searchID) {

            printf("\nStudent Found!\n");
            printf("ID: %d\n", s[i].ID);
            printf("Name: %s\n", s[i].name);
            printf("Score: %.2f\n", s[i].score);
            printf("Grade: %c\n", s[i].grade);

            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student not found");
    }

    return 0;
}