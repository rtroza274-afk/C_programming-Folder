#include<stdio.h>
void areaPeri(int *r){
    float area,peri;

    area= 3.1416 * (*r) * (*r);
    peri=2*3.1416*(*r);

    printf("Area= %.2f\n",area);
    printf("perimeter= %.2f\n",peri);
    
}

int main(){
    int r;
    printf("enter the radius:");
    scanf("%d",&r);

    areaPeri(&r);

     return 0;
}