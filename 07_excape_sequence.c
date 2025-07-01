#include <stdio.h>

int main(){
    int a = 5;
    float b = 2.3;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // \n represents a new line, \t represents tab, \\ repesent backslash excape
    printf("Hey I am good \\n nice \n");
    printf("Hey I am good \n nice \n");
    printf("Hey I am good \t nice \n");
    printf("Interger a = %d", a);
    printf("Float value b = %f", b);

    return 0;
}