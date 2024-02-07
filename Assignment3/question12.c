#include<stdio.h>
int main(){
    //Read in 20 integers and count the even numbers
    int count=0, num;
    for(int i=0; i<=19; i++){
        printf("Enter number: ");
        scanf("%d", &num);
        if(num%2==0){
            count++;
        }
    }
    printf("Total even numbers entered: %d", count);
}