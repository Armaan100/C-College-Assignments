#include<stdio.h>
#include<math.h>
int main(){
    //WAP to find roots of a quadratic equation

    double a, b, c, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("The first root is: %.2lf", root1);
    printf("The second root is: %.2lf", root2);
}