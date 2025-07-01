// /*7. Write a program to calculate the sum of the numbers occurring in the
// multiplication table of 8. (consider 8 x 1 to 8 x 10).*/
// #include <stdio.h>

// int main(){
//     int n = 8;
//     int i = 1;
//     printf("The table of 8 is: \n");
//     while(i<=10){
//         printf("8 x %d = %d \n", i, 8*i);
//         i++;
//     }
//     int sum = 8*(10*(10+1))/2;
//     printf("The sum of the number in table of 8 is: %d\n", sum);
//     return 0;
// }
// /*To find the sum of the numbers in the multiplication table of 8 from 8×1 to 8×10, add all the products together:
// 8×1 + 8×2 + 8×3 + ... + 8×10.

// This is the same as 8 multiplied by the sum of the first 10 natural numbers (1+2+...+10).
// So, calculate the sum of 1 to 10, then multiply that sum by 8.*/

// // taken help from Github copilot

// further code i done with help of harry sir.
#include <stdio.h>

int main(){
    int sum=0;
    for(int i = 1; i <=10; i++){
        sum+= 8*i;
    }
    printf("The sum of the table of 8 is: %d\n", sum);
    return 0;
}