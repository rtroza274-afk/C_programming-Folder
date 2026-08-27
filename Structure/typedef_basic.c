#include <stdio.h>

struct student {
    char name[50];
    int ID;
};

typedef struct student StudentData;

int main() {

    StudentData student1;

    printf("Enter name: ");
    scanf(" %[^\n]", student1.name);

    printf("Enter ID: ");
    scanf("%d", &student1.ID);

    printf("\nName: %s\n", student1.name);
    printf("ID: %d\n", student1.ID);

    return 0;
}