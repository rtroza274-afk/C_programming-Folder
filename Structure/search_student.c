#include <stdio.h>

struct student {
    int studentID;
    char name[50];
    float score;
};

int main() {
    struct student s[100];
    int n, i, searchID;
    int found = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {

        printf("\nStudent %d\n", i + 1);

        printf("Student ID: ");
        scanf("%d", &s[i].studentID);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Score: ");
        scanf("%f", &s[i].score);
    }

    printf("\nEnter student ID to search: ");
    scanf("%d", &searchID);

    for(i = 0; i < n; i++) {

        if(s[i].studentID == searchID) {

            printf("\nStudent found!\n");
            printf("ID: %d\n", s[i].studentID);
            printf("Name: %s\n", s[i].name);
            printf("Score: %.2f\n", s[i].score);

            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student not found");
    }

    return 0;
}