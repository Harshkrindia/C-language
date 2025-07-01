/*Write a program to determine whether a character entered by the user is
lowercase or not.*/
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    if(ch>=97 && ch<=122){
        printf("%c is a lowercase character.", ch);
    }
    else{
        printf("%c is not a lowercase character.", ch);
    }
    return 0;
}