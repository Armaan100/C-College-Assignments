#include<stdio.h>
int main(){
    //Write a program to read in numbers until the number -999 is encountered. The sum of
    //all numbers read until this point should be printed out.

    float num, sum;

    while(num!=-999){
        printf("Enter number: ");
        scanf("%f", &num);
        if(num==-999){
            num=-999;
            printf("Loop stopped cuz -999 is entered");
        }
        sum+=num;
    }
    printf("Sum till now: %.2f", sum);
}