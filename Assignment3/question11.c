#include<stdio.h>

int main(){
    //Keep reading in integers until one integer larger than 100 is not input. For example: 4 - 
    //90, 35, 78, 110 QUIT! (since 110 is bigger than 100)
    float num=0;
    // for(int i=0;;){
    //     printf("Enter number: ");
    //     scanf("%f", &num);
    //     if(num>100){
    //         printf("Limit crossed, eneterd a number greater than 100");
    //         break;
    //     }
    // }

    while(num<=100){
        printf("Enter number: ");
        scanf("%f",&num);
        if(num>100){
            printf("Limit crossed, eneterd a number greater than 100");
            num=101;
        }
    }
}