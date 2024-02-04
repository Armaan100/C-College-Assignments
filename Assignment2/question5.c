#include<stdio.h>
int main(){
    //Assignment operator assigns right hand side value to left hand side variable.
    //Use this idea to interchange (swap) values of two variables.

    //As mentioned in the question using a third variable
    int num1, num2;
    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);
    
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("%d %d\n", num1, num2);


    //Without using a third variable
    int num3, num4;
    printf("Enter num3 and num4: ");
    scanf("%d %d", &num3, &num4);
    
    num3+=num4;
    num4=num3-num4;
    num3=num3-num4;
    
    printf("%d %d", num3, num4);
}