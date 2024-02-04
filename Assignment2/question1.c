#include<stdio.h>
#include<math.h>
int main(){
    //WAP to practice math functions such as sin(),log(),
    //pow(), sqrt() by including <math.h> header file
    
    //sin()
    printf("%.2f\n", sin(3.14/2)); //The angle is in degree

    //cos()
    printf("%.2f\n", cos(3.14));

    //sqrt()
    printf("%.2f\n", sqrt(25));
    printf("%.2f\n", sqrt(-25)); //Output-> -1.#J
    printf("%.2f\n", sqrt(-4));  //Same
    printf("%.2f\n", sqrt(257));

    //pow()
    printf("%.2f\n", pow(2,4)); //2^4
    printf("%.2f\n", pow(4,0.5)); //4^0.5=2.00
    printf("%.2f\n", pow(4, 1/2));  //4^(1/2)=4^(0.5)=>int so, 4^0=1=>float=>1.00
}