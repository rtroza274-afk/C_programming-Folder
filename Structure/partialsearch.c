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

// Function declarations
void view();
void add();
void search();
void edit();

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

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                view();
                break;

            case 2:
                add();
                break;

            case 3:
                search();
                break;

            case 4:
                edit();
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}


// VIEW FUNCTION
void view()
{
    int i;

    if(num == 0)
    {
        printf("\nNo student records available.\n");
        return;
    }

    printf("\n===== ALL STUDENTS =====\n");

    for(i = 0; i < num; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("CGPA: %.2f\n", students[i].CGPA);
    }
}


// ADD FUNCTION
void add()
{
    if(num >= 100)
    {
        printf("\nArray is full!\n");
        return;
    }

    printf("\nEnter student name: ");
    scanf(" %[^\n]", students[num].name);

    printf("Enter ID: ");
    scanf("%d", &students[num].id);

    printf("Enter CGPA: ");
    scanf("%f", &students[num].CGPA);

    num++;

    printf("\nStudent added successfully!\n");
}


// SEARCH FUNCTION
void search()
{
    char key[50];
    int i;
    int found = 0;

    printf("\nEnter name to search: ");
    scanf(" %[^\n]", key);

    for(i = 0; i < num; i++)
    {
        // Partial search
        if(strstr(students[i].name, key) != NULL)
        {
            printf("\nStudent %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("CGPA: %.2f\n", students[i].CGPA);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nNo matching student found.\n");
    }
}


// EDIT FUNCTION
void edit()
{
    char key[50];
    int i;
    int found = 0;
    int choice;

    printf("\nEnter name to search: ");
    scanf(" %[^\n]", key);

    // Show matching records
    for(i = 0; i < num; i++)
    {
        if(strstr(students[i].name, key) != NULL)
        {
            printf("\nStudent %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("CGPA: %.2f\n", students[i].CGPA);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("\nNo matching student found.\n");
        return;
    }

    // Select record
    printf("\nEnter student number to edit: ");
    scanf("%d", &choice);

    choice--;

    if(choice < 0 || choice >= num)
    {
        printf("Invalid student number!\n");
        return;
    }

    // Enter new information
    printf("\nEnter new name: ");
    scanf(" %[^\n]", students[choice].name);

    printf("Enter new ID: ");
    scanf("%d", &students[choice].id);

    printf("Enter new CGPA: ");
    scanf("%f", &students[choice].CGPA);

    printf("\nStudent record updated successfully!\n");
}