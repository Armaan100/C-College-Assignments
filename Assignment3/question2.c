#include<stdio.h>
int main(){
    //Greatest no. among three no.s using if-else loop
    int a, b, c;
    printf("Enter num1, num2 and num3: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){
        if(a>c){
            printf("largest number is: %d\n", a);
        }
        else{
            printf("largest number is: %d\n", c);
        }
    }else if(a<b){
        if(b>c){
            printf("largest number is: %d\n", b);
        }
        else{
            printf("largest number is: %d\n", c);
        }
    }

    //Greatest no. among three no.s using ternary operator
    int num1, num2, num3;
    printf("Enter num1, num2 and num3: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest=(num1>num2) ? ((num1>num3) ? num1 : num3) : ((num2>num3) ? num2 : num3);
    printf("The largest number ha: %d", largest);
}