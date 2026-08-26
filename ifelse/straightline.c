#include<stdio.h>

int main(){
    double x1,x2,x3,y1,y2,y3;
    double m1=(y2-y1)/(x2-x1),m2=(y3-y2)/(x3-x2);

    printf("Enter the point (x1,y1): ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the point (x2,y2): ");
    scanf("%d %d",&x2,&y2);

    printf("Enter the point (x3,y3): ");
    scanf("%d %d",&x3,&y3);

    if (m1 == m2){
        printf("It is a straight line!!");
    }
    else{
        printf("It is not a straight line!!");
    }
     return 0;
}