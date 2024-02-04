#include<stdio.h>
int main(){
    //WAP to divide two numbers and use type casting operation (e.g. mean = (double)sum/n)
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    float result=(float)num1/num2;
    printf("%.2f", result);
}