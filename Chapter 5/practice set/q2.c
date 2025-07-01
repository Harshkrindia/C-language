// 2. Write a function to convert Celsius temperature into Fahrenheit.
// f = ((9/5)*c) + 32

#include <stdio.h>

float fahrenheit(float);

float fahrenheit(float c){
    return ((9.0/5.0)*c) + 32;
}


int main(){
    float celcius = 37;
    printf("%.2f celcius in fahrenheit is %f\n", celcius, fahrenheit(celcius));
    return 0;
}