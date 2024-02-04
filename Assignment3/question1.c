#include<stdio.h>
int main(){
    //For any character entered through keyboard check whether the entered character is
    //capital letter, small letter, a digit or special symbol
    char chr;
    printf("Enter character: ");
    scanf("%c", &chr);  //Capital Letter: 65-90;   //Small letter: 97-122    //Digit: 48-57
    //printf("%d", (int)chr);

    if(chr>=65 && chr<=90){
        printf("Entered character is capital letter");
    }
    else if(chr>=97 && chr<=122){
        printf("Entered character is a small letter1");
    }
    else if(chr>=48 && chr<=57){
        printf("Entered character is a digit");
    }
    else{
        printf("Entered charcter is a special symbol");
    }
}