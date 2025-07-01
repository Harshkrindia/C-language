/*PROJECT 1: NUMBER GUESSING GAME
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
Hint: Use loop & use a random number generator.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int random, user, tries=0;
    srand(time(0)); // Seed random number generator
    random = rand() % 1000 + 1; // Random number between 1 and 1000

    do
    {
        printf("Enter the number: ");
        scanf("%d", &user);
        tries++;
        if (user>random)
        {
            printf("Lower number please: \n");
        }
        else if (user<random)
        {
            printf("Higher number please \n");
        }
        else{
            printf("Congrats!\n");
        }        
    } while (user!=random);
    
    printf("You guessed the number in %d tries. \n", tries);
    return 0;
}