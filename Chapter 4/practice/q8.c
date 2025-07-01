// 8. Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main(){
    int num = 5;
    int product=1;
    for (int i = 1; i <=num; i++)
    {
        product*=i;
    }
    printf("The sum of factorial of %d is : %d\n", num, product);
    
    return 0;
}
// note: 0! = 1
// Error: i mistakenly wrote int i = num instead of i = 1