/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.*/
#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the marks in 1st subject: ");
    scanf("%d", &a);
    printf("Enter the marks in 2nd subject: ");
    scanf("%d", &b);
    printf("Enter the marks in 3rd subject: ");
    scanf("%d", &c);
    float percentage = (a+b+c)/3.0;
    // if (a<33)
    // {
    //     printf("You are failed \n");
    //     return 0;
    // }
    // else if (b<33)
    // {
    //     printf("You are failed \n");
    //     return 0;
    // }
    // else if (c<33)
    // {
    //     printf("You are failed \n");
    //     return 0;
    // }
    if(a<33 || b<33 || c<33){
        printf("You are failed due to not qualifying minimum marks in subject(s)\n");
    }
    // if (percentage>40)
    // {
    //     printf("You have passed \n");
    // }
    // else{
    //     printf("You are failed \n");
    // }
    percentage>40? printf("You have passed the exam. \n"):printf("You are failed due to less percentage.\n"); // ternary function
    return 0;
}

// this code is optimised by help of harry sir. 
