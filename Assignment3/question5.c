#include<stdio.h>
int main(){
    //No. is odd/even using if-else statement 
    int num1;
    printf("Enter your number: ");
    scanf("%d", &num1);

    if(num1%2==0){
        printf("Entered number is an even number\n");
    }
    else{
        printf("Entered number is an odd number\n");
    }


    int num2;
    printf("Enter your number: ");
    scanf("%d", &num2);

    (num2%2==0) ? printf("Even") : printf("odd");
}