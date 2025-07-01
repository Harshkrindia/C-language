#include <stdio.h>

int main(){
    int a = 12;
    float b = 34.64;
    // a = b; This also works but this is done by compiler without Specifying us.(implicit typecast)
    a = (int) b; // convert the data type to int
    // This is called explicit typecast. This is done to avoid warnings or unexpected behaviour.

    printf("Value of a is %d\n", a);
    // We can convert b to int also by same typecasting, just use %f while printing
    b = (int) b;
    printf("Value of b is %f\n", b);

    return 0;
}