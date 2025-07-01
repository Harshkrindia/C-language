// Area of rectange
#include <stdio.h>

int main(){
   /* int a;
    int b;
    int c;*/
    int a, b, c;  // this way also we can assign variable in the program (learned new thing)
    printf("Enter the length: ");
    scanf("%d", &a);
    printf("Enter the breadth: ");
    scanf("%d", &b);
    c = a*b;
    printf("The area of the renctangle is: %d \n", c);
    return 0;
}
//Help taken---> in scanf line, I was trying to print the "Enter the lenght:", but the scanf function only takes the input.
// Rest done by myself