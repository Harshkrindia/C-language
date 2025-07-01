/*8. Write a program to calculate the factorial of a given number using a for loop.
9. Repeat 8 using while loop.*/
#include <stdio.h>

int main(){
    int num=5, i=1, product=1;
    while(i<=num){
        product*= i;
        i++;
    }
    printf("The factorical is: %d\n", product);
    return 0;
}