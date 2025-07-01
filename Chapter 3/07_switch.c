#include <stdio.h>

int main(){
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch(a){
        case(1):
        printf("You entered 1 \n");
        case(2):
        printf("You entered 2 \n");
        break;
        case(3):
        printf("You entered 3 \n");
        case(4):
        printf("You entered 4 \n");
        default:
            printf("Nothing Matched \n");
// You can break the statement anytime by typing break;
// If you do not break, then it will execute every case below it.
    }
    return 0;
}