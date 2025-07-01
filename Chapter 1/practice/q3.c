//Convert celcius to fahrenhiet
#include <stdio.h>

int main(){
    float c;
    float f;
    printf("Enter the temperature in oCelcius: ");
    scanf("%f", &c);
    f = 32+ 9.0/5.0 *c; // Use 9.0/5.0 when using float cause it treats 9/5 as some integer
    printf("The temperature in oFahrenhiet is : %f \n0", f);
    return 0;
}
//Did my own fully myself