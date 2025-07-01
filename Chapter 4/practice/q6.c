// //6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
// //5. Write a program to sum first ten natural numbers using while loop.

// // #include <stdio.h>

// // int main(){
// //     int n = 10;
// //     do{
// //         printf("The sum of first 10 natural number are: %d \n", (n*(n+1))/2);
// //     }while(n >10);
// //     return 0;
// // }

// #include <stdio.h>

// int main(){
//     for(int n = 10; n>9; n--){
//         printf("The sume of first 10 natural number is: %d \n", (n*(n+1))/2);
//     }
//     return 0;
// }


// // done by myself
// further is done by help of harry sir.
#include <stdio.h>
// done by for loop
int main(){
    int sum = 0;
    for (int i = 0; i <=10; i++)
    {
        sum+=i;
    }
    printf("The sum of first 10 natural number is: %d\n", sum);

// done by do-while loop
    int i_2=1, sum_2=0;
    do
    {
        sum_2+=i_2;
        i_2++;
    } while (i_2<=10);
    printf("The sum of first 10 natural numbers is: %d\n", sum_2);
    return 0;
}