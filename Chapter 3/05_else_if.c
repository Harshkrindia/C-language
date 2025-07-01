#include <stdio.h>

int main(){
    int age = 47;
    if(age>60){
        printf("You can drive and you are a senior citizen\n");
    }
    else if(age>45){
        printf("You can drive and you are a elder \n");
    }
    else if(age>18){
        printf("You can drive \n ");
    }
    else{
        printf("You cannot drive \n");
    }

    return 0;
}