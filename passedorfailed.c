#include<stdio.h>
#include<stdlib.h>

int main(void){
    float mark;
    printf("Enter your mark :");
    scanf("%f",&mark);
    if (mark >= 50 && mark <= 100 ){
        printf("Passed!");
    }else if (mark > 0 && mark < 50){
        printf("Failed!");
    }
    else{
        printf("You have given wrong mark!");
    }
    return EXIT_SUCCESS;
}