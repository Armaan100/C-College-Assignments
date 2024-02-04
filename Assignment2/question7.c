#include<stdio.h>
int main(){
    //WAP to utilizing ternary operator(? :)
    int num1, num2, result;
    printf("Entered num1 and num2: ");
    scanf("%d %d\n", &num1, &num2);

    result=(num1>num2) ? num1 : num2;
    printf("Greater number is: %d", result);
}

