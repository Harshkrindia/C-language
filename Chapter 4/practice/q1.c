// 1. Write a program to print multiplication table of a given number n.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d x %d = %d \n",n, i, n*i);
        i++;
    } while (i<=10);
    
    return 0;
}
// My mistake: I did i==10, but it should be i<=10.
// Rest done by myself.