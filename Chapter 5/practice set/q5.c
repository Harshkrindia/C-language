// 5. What will the following line produce in a C program:
#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++); // according to me: 4 5 5
    // 6 6 4 evaluation done from right to left
    // 4 5 5 evaluation done from left to right
    return 0;
}
