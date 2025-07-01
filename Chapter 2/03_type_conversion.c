#include <stdio.h>

int main(){
    int a = 9;
    float b = 2.0;
    float c = a/b;
    int d = 12.8;
    printf("The value of a/b is %f", c); //int and float → float
    printf("The value of d is %d", d); // 12.8 is demoted to 12 cause its stored in an integer
    return 0;
}