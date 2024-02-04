#include<stdio.h>
int main(){
    //String is set of characters (one next to each other stored in the memory and 
    //not related to each other), e.g. ="abc123". WAP to practice type casting using the
    //following functions. You can initialize a string using statement char *s="3.145" Then s is a string
    
    //atof() => converts string to float
    //atoi() => convers to int
    //atol() => converts string to long
    //itoa() => converts int to string
    //ltoa() => convets long to string

    char *str1="12.578";
    //atof()
    float num1=atof(str1);
    printf("%f\n", num1);

    char *str2="23.24";
    //atoi()
    int num2=atoi(str2);
    printf("%d\n", num2);

    char *str3="38.10";
    //atol()
    long num3=atol(str3);
    printf("%ld", num3);
}
