#include <stdio.h>

int main(){
    int n=10;
    for(int i = 1; i<10; i++){
        if(i==6){
        // break; // exit the loop now
        continue; // exit/skip the iteration now
    }
        

        printf("The value of i is %d\n", i);
    }
    printf("For loop is done.\n");
    return 0;
}