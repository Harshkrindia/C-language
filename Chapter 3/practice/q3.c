/*Question: Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
Income SlabTax
2.5 – 5.0L 5%
5.0L - 10.0L 20%
Above 10.0L 30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/
#include <stdio.h>

int main(){
    float salary;
    printf("Enter the salary earned in a year in Rupees: ");
    scanf("%f", &salary);
    if(salary>250000 && salary<=500000){
        printf("You need to pay Rs. %f \n", salary*0.05);
    }
    else if(salary>500000 && salary<=1000000){
        printf("You need to pay Rs. %f \n", salary*0.2);
    }
    else if(salary>1000000){
        printf("You need to pay Rs. %f \n", salary*0.3);
    }
    else{
        printf("Congrats! You do not need to pay any TAX \n");
    }

    return 0;
}