//10. Write a program to check whether a given number is prime or not using loops.

#include <stdio.h>

int main(){
    int n;
    printf("Enter to check prime or not: ");
    scanf("%d", &n);
    int not_prime=0;
    if (n==0 || n==1)
    {
        not_prime=1;
    }
    else
    {
    for (int i = 2; i < n; i++)
    {
        if (n%i==0 && n!=2)
        {
            not_prime=1;
            break;
        }
        
    }
    }

    if (not_prime)        // it checks whether not_prime is non-zero
    {
        printf("This is not prime. \n");
    }
    else{
        printf("this is a prime \n");
    }
    
    return 0;
}
// done with help of harry sir. 
// Concept--> the number should not be divisible by any number except 1 and itself.5