#include <stdio.h>

// Function prototype
int sum(int, int);

// Function definition
int sum(int x, int y){
    return x+y;
}

int main(){
    int a = 3;
    int b = 2;

    // int c = a+b;
    // printf("The sum is : %d \n", c);
    
    int c = sum(a, b); // Function call
    printf("The sum is : %d \n", c);

    int a2 = 5;
    int b2 = 8;

    // int c2 = a2+b2;
    // printf("The sum is : %d \n", c2);

    int c2 = sum(a2, b2);
    printf("The sum is : %d \n", c2);


    return 0;
}