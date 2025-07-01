/*calculate simple interest for a set of values representing
principal, number of years and rate of interest. */
//Formula used: Simple interest = (Principal amount x Rate x Time in years)/100
#include<stdio.h>

int main(){
    int amount;
    float rate;
    float time;
    printf("Enter the Principal amount to be taken: ");
    scanf("%d", &amount);
    printf("Enter the Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time duration (in years): ");
    scanf("%f", &time);
    float interest;
    interest = (amount*rate*time)/100;
    printf("The simple interest is: %f",interest);
    return 0;
}
//Help taken---> For finding out the formula
//Rest all is done by myself