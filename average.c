#include <stdio.h>
#include <stdlib.h>

int main(void){
    float a , b,c;
    float average;
    printf("Please enter the first number : ");
    scanf("%f",&a);
    printf("Please enter the second number: ");
    scanf("%f",&b);
    printf("please enter the third number :");
    scanf("%f",&c);
    average = (a+b+c )/ 3;
    printf("The result is : %f", average);
    return EXIT_SUCCESS;
}