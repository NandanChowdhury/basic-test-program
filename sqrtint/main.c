#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x1,x2;
    printf("Enter the coefficient of x*x: ");
    scanf("%f",&a);
    printf("Enter the coefficient of x: ");
    scanf("%f",&b);
    printf("Enter the value of the numerical term: ");
    scanf("%f",&c);
    x1=((-b-sqrt(b*b-4*a*c))/2*a);
    printf("Root of an equation=%f\n",x1);
    x2=((-b+sqrt(b*b-4*a*c))/2*a);
    printf("Root of an equation=%f\n",x2);
    return 0;
}
