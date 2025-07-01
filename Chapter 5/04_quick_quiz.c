// Quick Quiz: Use the library function to calculate the area of a square with side a.
#include <stdio.h>
#include<math.h>

int main(){
    int side = 3;
    printf("The area of square of side %d is %f \n", side, pow(side, 2));
    return 0;
}