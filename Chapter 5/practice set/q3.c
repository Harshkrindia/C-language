/*3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
earth. Consider g = 9.8m/s2.*/

#include <stdio.h>

float force(float);

float force(float m){
    return m*9.8;
}

int main(){
    int mass = 10;
    printf("The force on body by earth is %f\n", force(mass));
    return 0;
}