// //5. Write a program to sum first ten natural numbers using while loop.
// #include <stdio.h>

// int main(){
//     // int n = 10;
//     int n;
//     printf("Enter the number for sum: ");
//     scanf("%d", &n);
//     while(n==n){
//         int sum = (n*(n+1))/2;
//         printf("The sum of first %d natural number are: %d \n", n, sum);
//         break;
//     }
//     return 0;
// }
// // i wrote a program for taking input and the doing their sum from starting i.e. 1.

// no further program is written by help of harry sir.
#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while (i<=10)
    {
        sum += i;
        i++;
    }
    printf("The sum is: %d\n", sum);
    
    return 0;
}