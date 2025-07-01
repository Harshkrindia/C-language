// 1. Write a program using function to find average of three numbers.
#include <stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    float d = (a+b+c)/3.0;
    return d;
}

int main(){
    int i = 2, j = 3, k = 5;
    printf("The average is: %f\n", average(i,j,k));
    return 0;
}