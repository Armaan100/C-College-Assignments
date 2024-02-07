#include<stdio.h>
#include<math.h>
// WAP using loop (for, while, do-while):
// *Factorial of number
// Whether no. is prime or not
// X raised to power n
// Check if the input integer is an Armstrong number or not?
// Range of set of entered nos. by finding smallest and largest
// Multiplication table
// HCF of two numbers
// GCD of two numbers
// *Generate Fibonacci series
int main(){

    //1)Factorial of number
    int num1, fact=1;
    printf("Enter number: ");
    scanf("%d", &num1);
    for(int i=1; i<=num1;i++){
        fact*=i;
    }
    printf("%d", fact);

    //2)whether x is prime or not
    int num2, count;
    printf("Enter number: ");
    scanf("%d", &num2);
    for(int i=2; i<=num2/2; i++){
        if(num2%i==0){
            count++;
        }
        if(count==2){
            printf("Not a prime number");
            break;
        }
    }
    printf("Yes, a prime number.");



    //3) X raised to power 
    int num3, pow3;
    printf("Enter number: ");
    scanf("%d", &num3);
    printf("Enter power: ");
    scanf("%d", &pow3);
    
    for(int i=0; i<=pow3-1;i++){
        num3*=num3;
    }


    //4)Check if the input integer is an Armstrong number or not?
    int num4, sum;
    printf("Enter number: ");
    scanf("%d", &num4);
    int temp=num4;
    while(num4>0){
        int d=num4%10;
        sum+=pow(d, 3);
        num4/10;
    }
    if(sum==num4){
        printf("You have entered a Armstrong Number");
    }
    else{
        printf("Not an Armstrong Number");
    }


    //5)Range of set of entered nos. by finding smallest and largest
    
    //6) Multiplication table
    int num6;
    printf("Enter number: ");
    scanf("%f", &num6);

    for(int i=1; i<=10; i++){

        printf("%d * %d = %d\n", num6, i, num6*i);
    }

    
    //7) HCF of two numbers
    int num7, num8, hcf;
    printf("Enter number1: ");
    scanf("%d", &num7);
    printf("Enter number: ");
    scanf("%d", &num8);

    while(1){
        if(num7<num8){
            num8-=num7;
        }
        else if(num7>num8){
            num7-=num8;
        }

        if(num7==0){
            hcf=num8;
            break;
        }
        else if(num8==0){
            hcf=num7;
            break;
        }
    }

    printf("HCF is: %d", hcf);


    //8)LCM of two numbers
    //HCF(n1, n2)*LCM(n1, n2)=n1*n2

    int num9, num10, hcf_f_lcm;
    float lcm;
    printf("Enter number1: ");
    scanf("%d", &num9);
    printf("Enter number: ");
    scanf("%d", &num10);

    while(1){
        if(num9<num10){
            num10-=num9;
        }
        else if(num9>num10){
            num9-=num10;
        }

        if(num9==0){
            hcf_f_lcm=num10;
            break;
        }
        else if(num10==0){
            hcf_f_lcm=num9;
            break;
        }
    }

    lcm=(float)(num9*num10)/hcf_f_lcm;
    printf("%f", lcm);

}