#include <stdio.h>

int main(){
    int i;
    int j=0;
    printf("Enter the natural number: ");
    scanf("%d", &i);
    do{
        printf("%d \n", j);
        j++;
    }while(j<=i);
    return 0;
}