// 3. Write a program to check whether a number is divisible by 97 or not.
#include<stdio.h>

int main(){
 /*  By harry-> He only showed what will be the remainder
    int a = 2342354;
    printf("The value of a%%97 is %d", a%97); // here we have used %% so that it does not show error because % is used to tell a format specifier. It will work without it also but i am doing so so that no error is shown in terminal
  */
    int a;
    printf("Enter the number for the divisibility test of 97: ");
    scanf("%d", &a);
    int out = a%97;
    if (out == 0) // for equating, == should be used instead of =
    {
        printf("The number %d is divisible by 97. \n", a);
    }
    else
    {
        printf("The number %d is not divisible by 97. \n", a);

    }
    
    return 0;
}
// Help taken- For equating, == should be used instead of = and ";" should not be after if or else as it terminates the if or else function.
// Rest all done by myself