#include<stdio.h>
int main(){
    //WAP to implement assignment operators such as +=, -=, *=, /=, %=
    float num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%f %f", &num1, &num2);
    
    //a+=b == a=a+b
    printf("num1+=num2%.2f\n", num1+=num2);

    //a-=b == a=a-b
    printf("num1-=num2%.2f\n", num1-=num2);

    //a*=b == a=a*b
    printf("num1*=num2%.2f\n", num1*=num2);

    //a/=b == a=a/b
    printf("num1/=num2%.2f\n", num1/=num2);

    //a%=b == a=a%b
    int rem_n1, rem_n2;
    printf("Enter num1 and num2 for remainder operation: ");
    scanf("%d %d", &rem_n1, &rem_n2);

    printf("num1modulonum2=%d", rem_n1%=rem_n2);
}