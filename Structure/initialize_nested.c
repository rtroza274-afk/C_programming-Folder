#include <stdio.h>

struct birthdate{
    int month;
    int day;
    int year;
};

struct person{
    char name[50];
    struct birthdate birthdate;
};

int main(){
    struct person p1 ={"Raiana",{8,27,2005}};

    printf("Name: %s\n",p1.name);

    printf("Date of Birth:%d/%d/%d\n",
           p1.birthdate.day,
           p1.birthdate.month,
           p1.birthdate.year);

    return 0;
}