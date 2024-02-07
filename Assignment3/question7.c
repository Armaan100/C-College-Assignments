#include<stdio.h>
int main(){
    //A library charges a fine for every book returned late. For the first 5 days the fine is 50
    //paisa, for 6-10 days fine is one rupee and above 10 days fine is 5 rupees. If you return
    //the book after 30 days your membership will be canceled. WAP to accept no. of days the
    //member is late to return the book and display the fine or appropriate message

    int no_of_days;
    printf("Enter the number of days: ");
    scanf("%d", &no_of_days);

    if(no_of_days<=5 && no_of_days>=1){
        printf("You are fined 50 paisa");
    }else if(no_of_days>=6 && no_of_days<=10){
        printf("You are fined 5 rupees");
    }else if(no_of_days>30){
        printf("Membership cancelled");
    }
}