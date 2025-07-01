// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include <stdio.h>

int sum_natural(int n);

// sum of n natural number = 1 + 2 + 3 + 4 + 5 +........ (n-1) + n
// sum of n natural number = sum of (n-1) natural number + n

int sum_natural(int n){
    if(n == 1){
        return 1;
    }
    return sum_natural(n-1) + n;
}

int main(){
    int a = 100;
    printf("The sum is: %d \n", sum_natural(a));
    return 0;
}