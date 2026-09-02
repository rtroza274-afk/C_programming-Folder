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

/* Function declarations */
void loadFromFile();
void saveToFile();
void view();
void add();
void search();
void edit();

int main()
{
    int choice;

    /* Read old records from file when program starts */
    loadFromFile();

    printf("===== STUDENT DATABASE =====\n");

    /* Show records already stored in file */
    view();

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. View\n");
        printf("2. Add\n");
        printf("3. Search\n");
        printf("4. Edit\n");
        printf("5. Exit\n");

        printf("Enter choice: ");
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
                /* Save before program finishes */
                saveToFile();
                printf("Data saved successfully.\n");
                printf("Program ended.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}


/* Read records from file */
void loadFromFile()
{
    FILE *fp;

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        /* File doesn't exist yet */
        num = 0;
        return;
    }

    num = 0;

    while(num < 100 &&
          fscanf(fp, " %49[^,],%d,%f",
                 students[num].name,
                 &students[num].id,
                 &students[num].CGPA) == 3)
    {
        num++;
    }

    fclose(fp);
}


/* Write array of structures to file */
void saveToFile()
{
    FILE *fp;
    int i;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("Unable to open file!\n");
        return;
    }

    for(i = 0; i < num; i++)
    {
        fprintf(fp, "%s,%d,%.2f\n",
                students[i].name,
                students[i].id,
                students[i].CGPA);
    }

    fclose(fp);
}


/* View all records */
void view()
{
    int i;

    if(num == 0)
    {
        printf("\nNo records found.\n");
        return;
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < num; i++)
    {
        printf("\nRecord %d\n", i + 1);
        printf("Name : %s\n", students[i].name);
        printf("ID   : %d\n", students[i].id);
        printf("CGPA : %.2f\n", students[i].CGPA);
    }
}


/* Add a new record */
void add()
{
    if(num >= 100)
    {
        printf("Array is full!\n");
        return;
    }

    printf("\nEnter name: ");
    scanf(" %49[^\n]", students[num].name);

    printf("Enter ID: ");
    scanf("%d", &students[num].id);

    printf("Enter CGPA: ");
    scanf("%f", &students[num].CGPA);

    num++;

    printf("Record added successfully.\n");
}


/* Search using partial name */
void search()
{
    char key[50];
    int i;
    int found = 0;

    printf("\nEnter name to search: ");
    scanf(" %49[^\n]", key);

    for(i = 0; i < num; i++)
    {
        if(strstr(students[i].name, key) != NULL)
        {
            printf("\nName : %s\n", students[i].name);
            printf("ID   : %d\n", students[i].id);
            printf("CGPA : %.2f\n", students[i].CGPA);

            found = 1;
        }
    }

    if(found == 0)
    {
        printf("No matching record found.\n");
    }
}


/* Edit a record */
void edit()
{
    char key[50];
    int match[100];
    int count = 0;
    int i;
    int choice;
    int index;

    printf("\nEnter name to search: ");
    scanf(" %49[^\n]", key);

    /* Find matching records */
    for(i = 0; i < num; i++)
    {
        if(strstr(students[i].name, key) != NULL)
        {
            match[count] = i;

            printf("\n%d. %s | ID: %d | CGPA: %.2f",
                   count + 1,
                   students[i].name,
                   students[i].id,
                   students[i].CGPA);

            count++;
        }
    }

    if(count == 0)
    {
        printf("\nNo matching record found.\n");
        return;
    }

    printf("\n\nEnter record number to edit: ");
    scanf("%d", &choice);

    if(choice < 1 || choice > count)
    {
        printf("Invalid choice!\n");
        return;
    }

    /* Convert matching record number to array index */
    index = match[choice - 1];

    printf("\nEnter new name: ");
    scanf(" %49[^\n]", students[index].name);

    printf("Enter new ID: ");
    scanf("%d", &students[index].id);

    printf("Enter new CGPA: ");
    scanf("%f", &students[index].CGPA);

    printf("Record updated successfully.\n");
}