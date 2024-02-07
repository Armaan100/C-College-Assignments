#include<stdio.h>
int main(){
    //To check a no. say ‘n’ divisible by 5 and/or 8. Print the appropriate message accordingly.

    int num;
    printf("Enter number: ");
    scanf("%d", num);

    if(num%5==0){
        printf("Divisible by 5");
    }
    if(num%8==0){
        printf("Divisible by 8");
    }
}