// 2. Write a program to print multiplication table of 10 in reversed order.
#include <stdio.h>

int main(){
    int n = 10;
    for(int i = 10; i; i--){
        printf("10 x %d = %d\n", i, 10*i);
    }
    return 0;
}
// all done by myself