#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the coordinates :\n");
    scanf ("%d %d",&x,&y);

    if(x==0 && y==0){
        printf("It lies on origin");
    }
    else if(x==0){
        printf("it lies on y-axis");
    }
    else if(y==0){
        printf("It lies on x-axis");
    }
    else{
        printf("the point doesnt belong on x-axis or y-axis or origin");
    }
    
     return 0;
}