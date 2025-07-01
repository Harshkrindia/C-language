#include <stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int c = 4;
    printf("Value of a*b/c + 3 is %d \n", a*b/c + 3);
    printf("The value of 3*a/4*b*10 - 5*c is %d \n", 3*a/4*b*10 - 5*c);
    // 6/4*b*10 - 20
    // 1.5*b*10 - 20 ----> Here 1.5 will be converted to 1 before moving to next step because its an int function
    // 1*b*10 - 20
    // 3*10 - 20
    // 30 - 20
    // 10
    // It always moves left to right if no brackets are there. (In arithematic operations only)
    // PRO TIP- Always use brackets to avoid confusion. 
    return 0;
}