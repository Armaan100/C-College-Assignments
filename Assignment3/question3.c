#include<stdio.h>
#include<conio.h>
int main(){
    //To implement calculator (+,-/,*,% ) using switch statement
    int num1, num2, result;
    int operator;
    printf("Enter first number and enter second number: ");
    scanf("%d %d", &num1, &num2);
    printf("For + => enter 1, - => enter 2, * => enter 3, / => enter 4, \% => enter 5\n");
    printf("Enter your choice: ");
    scanf("%d", &operator);

    switch(operator){
        case 1:
            result=num1+num2;
            printf("num1+num1=%d\n", result);
            break;
        case 2:
            result=num1-num2;
            printf("num1-num1=%d\n", result);
            break;
        case 3:
            result=num1*num2;
            printf("num1*num1=%d\n", result);
            break;
        case 4:
            printf("num1/num1=%.2f\n", (float)num1/num2);
            break;
        case 5:
            result=num1%num2;
            printf("num1%num1=%d\n", result);
            break;
        default:
            printf("Invalid Entry");
    }
    
}