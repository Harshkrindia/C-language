//Area of cicle and modify the same program for the volume of cylinder
#include<stdio.h>

int main(){
    int r;
    printf("Enter the radius of circle : ");
    scanf("%d", &r);
    float area;
    area = 3.14*r*r;
    printf("The Area of the circle is %f \n", area); 
    // // line 9 and 10 can be combined also by: (New thing learned)
  //  printf("The Area of the circle of radius %d is %f \n", r, 3.14*r*r);
    
    printf("Enter the height of the cylinder: ");
    float h;
    scanf("%f", &h);
    float volume;
    volume = 3.14*r*r*h;
    printf("The Volume of the Cylinder is: %f \n", volume);
    return 0;
}
//Help taken---> for Volume of Cylinder
//Rest done by myself only