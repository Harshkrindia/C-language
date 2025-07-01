#include <stdio.h>

int main(){
    if(1){
        printf("This if is executed \n");
    }
    if(1){
        printf("This if is executed \n");
    }
    if(3437493){
        printf("This if is also executed \n");
    }
    if(2.434){
        printf("This if is also executed \n");
    }
    if('c'){
        printf("This character if is also executed \n");
    }
    if(0){
        printf("This is 0 if. This is not executed \n");
    }
    return 0;
}