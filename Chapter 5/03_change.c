#include <stdio.h>

int change(int a);

int change(int a){
    a = 67; // Misnomer
    return a;
}

int main(){
    int b = 22;
    change(b); // The value of b remains 22
    printf("The value of b is %d\n", b);
    return 0;
}