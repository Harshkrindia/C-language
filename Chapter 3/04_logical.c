#include <stdio.h>

int main(){
    int a = 1; int b = 1;
    printf("The value of a and b is: %d \n", a&&b);
    printf("The value of a or b is: %d \n", a||b);
    printf("The value of not(a) is : %d \n", !a);
 //These are just like truth table just like gates in semi conductor chapter.
    if(a&&b){
        printf("Both are true \n");
    }
    // is same as writing ...
    if(a){
        if(b){
            printf("Both are true \n");
        }
    }
    return 0;
}