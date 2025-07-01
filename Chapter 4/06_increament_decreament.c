#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);

    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);// 11

    printf("The value of i is %d\n", ++i); // 12

    i+=2; // same as i = i + 2;
    printf("The value of i is %d\n", i);

    // i++ prints i first then increments i (Post increament operator)
    // ++i increments i first then prints i (Pre increament operator)

    return 0;
}