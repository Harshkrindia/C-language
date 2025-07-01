/*
7. Write a program using function to print the following pattern (first n lines)
*
***
*****
*/
#include <stdio.h>

int main(){
    int a = 3;
    for (int i = 0; i < a; i++)
    {
        // this code runs from 0 to 2
        // if i = 0, print 1 star
        // if i = 1, print 3 star
        // if i = 2, print 5 star

        // no. of stars = 2*i+1 // this is formula for odd numbers
        for (int j = 0; j < 2*i+1; j++) 
        {
            printf("*");
        }

        // prints new line
        printf("\n");
    }
    
    return 0;
}