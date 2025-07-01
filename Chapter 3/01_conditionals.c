#include <stdio.h>

int main(){
    int age = 15;

    if(age>10){
        printf("You are a genius level 1 \n");
        printf("Your age is greater than 10 \n");
    }
    if(age%5 == 0){ // == is used to equate in C 
                    //  = is used to assign in C
        printf("You are a genius level 2 \n");
        printf("Your age is divisible by 5 \n");        
    }
    // we can use if operator alone also. No need of else is compulsory
    // we can use multiple if operator
    return 0;
}