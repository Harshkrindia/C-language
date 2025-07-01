/*Write a program to find greatest of four numbers entered by the user.*/
#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter the 1st number: ");
    scanf("%d", &a);
    printf("Enter the 2nd number: ");
    scanf("%d", &b);
    printf("Enter the 3rd number: ");
    scanf("%d", &c);
    printf("Enter the 4th number: ");
    scanf("%d", &d);
    
    if(a>b && a>c && a>d){
        printf("%d is the greatest number among all.\n", a);
    }
    if(b>a && b>c && b>d){
        printf("%d is the greatest number among all.\n", b);
    }
    if(c>b && c>a && c>d){
        printf("%d is the greatest number among all.\n", c);
    }
    else{
        printf("%d is the greatest number among all.\n", d);
    }
    return 0;
}