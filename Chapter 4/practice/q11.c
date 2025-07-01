/*10. Write a program to check whether a given number is prime or not using loops.
11. Implement 10 using other types of loops.*/
#include <stdio.h>

int main(){
    int not_prime=0, i=2, n=7;
    if(n==0 || n==1){
        not_prime=1;}
    while (i<n)
    {
        if (n%i==0 && i!=2)
        {
            not_prime= 1;
            break;
        }
        i++;
        
    }
    if (not_prime==1)
    {
        printf("%d is not a prime \n", n);
    }
    else
    {
        printf("%d is a prime. \n", n);
    }
    
    return 0;
}