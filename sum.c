#include<stdio.h>
#include<stdlib.h>

int main(void){
    float number2, sum;
    int number1;
    printf("Enter the 2 numbers :");
    scanf("%d %f",&number1,&number2);
    sum = number1+number2;
    printf("The sum is :%f",sum);
    return EXIT_SUCCESS;
}