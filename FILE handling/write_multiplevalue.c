#include <stdio.h>

int main() {
    FILE *fp;

    char name[50]="Ahmad";
    int ID=12345;
    char department[20]="CSE";
    float cgpa=3.75;

    fp=fopen("student.txt","w");

    if(fp==NULL){
        printf("File could not be opened.");
        return 1;
    }

    fprintf(fp,"Name: %s\n",name);
    fprintf(fp,"Student ID: %d\n",ID);
    fprintf(fp,"Department:%s\n",department);
    fprintf(fp,"CGPA:%.2f\n",cgpa);

    fclose(fp);

    printf("Student information saved.");

    return 0;
}