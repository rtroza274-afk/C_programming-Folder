#include <stdio.h>

struct address {
    int houseNumber;
    char street[20];
    int zipcode;
};

struct student {
    char name[50];
    int studentID;
    char major[20];
    struct address addr;
};

int main() {
    struct student s1;

    printf("Enter name: ");
    scanf(" %[^\n]", s1.name);

    printf("Enter student ID: ");
    scanf("%d", &s1.studentID);

    printf("Enter major: ");
    scanf("%s", s1.major);

    printf("Enter house number: ");
    scanf("%d", &s1.addr.houseNumber);

    printf("Enter street: ");
    scanf(" %[^\n]", s1.addr.street);

    printf("Enter zipcode: ");
    scanf("%d", &s1.addr.zipcode);

    printf("\n--- Student Information ---\n");

    printf("Name: %s\n", s1.name);
    printf("Student ID: %d\n", s1.studentID);
    printf("Major: %s\n", s1.major);

    printf("House Number: %d\n", s1.addr.houseNumber);
    printf("Street: %s\n", s1.addr.street);
    printf("Zipcode: %d\n", s1.addr.zipcode);

    return 0;
}