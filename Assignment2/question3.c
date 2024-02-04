#include<stdio.h>
#include<math.h>
int main(){
    //WAP to format console output using '\n','\t','\b'
    //within printf statement

    //'\n'
    printf("Hello\nEntered into a new line in the same line");

    //'\t'
    printf("Used\ntab without using keyboard tab haha\n");


    //'\b'
    printf("hi\b hello\b bye\b");  // \b=>is one backspace so, hi\b==h
                                   //but \b\b or\b\b...(n times) no effect at all
}