#include <stdio.h>

struct Complex{
    int Real;
    int Imaginary;
};
int main(){

    struct Complex c1,c2,sum;

    printf("Enter first complex number: ");
    scanf("%d%d",&c1.Real,&c1.Imaginary);
    printf("Enter second complex number: ");
    scanf("%d%d",&c2.Real,&c2.Imaginary);

    sum.Real = c1.Real+c2.Real;
    sum.Imaginary =c1.Imaginary+c2.Imaginary;

    printf("Sum=%d+%di",sum.Real,sum.Imaginary);

    return 0;
}