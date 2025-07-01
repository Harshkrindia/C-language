#include <stdio.h>

int factorial(int);

int factorial(int n){
    if (n == 0 || n == 1) // Base condition
    {
        return 1;
    }
    else{ // factorial n = n* factorial (n-1)
        return n* factorial(n-1);
    }
    
}

int main(){
    int i = 5;
    printf("Factorial of %d is %d\n", i, factorial(i));
    return 0;
}