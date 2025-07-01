// 4. Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ......
// fibonacci(n) = fibonacchi(n-1) + fibonacchi(n-2)

int fibonacchi(int);

int fibonacchi(int n){
    if(n==1 || n==2){
        return (n-1);
    }
    return fibonacchi(n-1) + fibonacchi(n-2);
}


int main(){
    int n=5;
    printf("The fibonacchi series at %d is %d\n", n, fibonacchi(n));
    return 0;
}