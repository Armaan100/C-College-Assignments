#include<stdio.h>
int main(){
    //WAP to shift left and shift right operators (<< and >>)
    //Left Shift Operator =>  <<
    //Right Shift Operator => >>

    
    unsigned char num1=10, num2=7;
    // printf("Enter number: ");
    // scanf("&c\n", &num1);

    //Left Shift
    printf("num1<<1: %d\n", num1<<1);
    printf("num1<<2: %d\n", num1<<2);

    printf("num2<<1: %d\n", num2<<1);
    printf("num2<<2: %d\n", num2<<2);



    //Right Shift
    printf("num1>>1: %d\n", num1>>1);  //SHIFT+ALT then drag mouse to select elements in a column
    printf("num1>>2: %d\n", num1>>2);

    printf("num2>>1: %d\n", num2>>1);
    printf("num2>>2: %d\n", num2>>2);
}