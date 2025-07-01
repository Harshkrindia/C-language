/*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.*/
#include <stdio.h>

int main(){
    int year;
    printf("Enter the Year to check: \n");
    scanf("%d", & year);
    if(year%4==0 && year%100!=0 || year%400==0){
        printf("%d is a LEAP YEAR. \n", year);
    }
    else{
        printf("%d is not a LEAP YEAR. \n", year);
    }

    return 0;
}
// Complete help taken from harry sir.
// I lacked use of &&, ||