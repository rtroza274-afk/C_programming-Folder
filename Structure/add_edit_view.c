#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int id;
    float CGPA;
};

struct Student students[100];
int num = 0;


// a. VIEW
void view()
{
    FILE *fp;
    int i;

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("No records found.\n");
        return;
    }

    printf("\n===== Student Records =====\n");

    i = 0;

    while(fscanf(fp, "%[^,],%d,%f\n",
                 students[i].name,
                 &students[i].id,
                 &students[i].CGPA) == 3)
    {
        printf("\nRecord %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("CGPA: %.2f\n", students[i].CGPA);

        i++;
    }

    num = i;

    fclose(fp);
}


// b. ADD
void add()
{
    FILE *fp;

    if(num >= 100)
    {
        printf("Array is full!\n");
        return;
    }

    printf("\nEnter student name: ");
    scanf(" %[^\n]", students[num].name);

    printf("Enter ID: ");
    scanf("%d", &students[num].id);

    printf("Enter CGPA: ");
    scanf("%f", &students[num].CGPA);

    fp = fopen("students.txt", "a");

    fprintf(fp, "%s,%d,%.2f\n",
            students[num].name,
            students[num].id,
            students[num].CGPA);

    fclose(fp);

    num++;

    printf("Student added successfully!\n");
}


// c. SEARCH
void search()
{
    char key[50];
    int i, found = 0;

    printf("\nEnter student name to search: ");
    scanf(" %[^\n]", key);

    for(i = 0; i < num; i++)
    {
        if(strcmp(students[i].name, key) == 0)
        {
            printf("\nRecord %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("CGPA: %.2f\n", students[i].CGPA);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No matching record found.\n");
    }
}


// d. EDIT
void edit()
{
    char key[50];
    int i, found = 0;
    int choice;

    printf("\nEnter student name to search: ");
    scanf(" %[^\n]", key);

    // First show matching records
    for(i = 0; i < num; i++)
    {
        if(strcmp(students[i].name, key) == 0)
        {
            printf("\nRecord %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("CGPA: %.2f\n", students[i].CGPA);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No matching record found.\n");
        return;
    }

    // Select record
    printf("\nEnter record number to edit: ");
    scanf("%d", &choice);

    choice--;

    if(choice < 0 || choice >= num)
    {
        printf("Invalid record number.\n");
        return;
    }

    // Enter new information
    printf("\nEnter new name: ");
    scanf(" %[^\n]", students[choice].name);

    printf("Enter new ID: ");
    scanf("%d", &students[choice].id);

    printf("Enter new CGPA: ");
    scanf("%f", &students[choice].CGPA);

    printf("Record updated successfully!\n");
}


int main()
{
    int choice;

    do
    {
        printf("\n===== STUDENT DATABASE =====\n");
        printf("1. View\n");
        printf("2. Add\n");
        printf("3. Search\n");
        printf("4. Edit\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
            view();

        else if(choice == 2)
            add();

        else if(choice == 3)
            search();

        else if(choice == 4)
            edit();

        else if(choice == 5)
            printf("Goodbye!\n");

        else
            printf("Invalid choice!\n");

    } while(choice != 5);

    return 0;
}