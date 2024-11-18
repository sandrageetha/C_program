#include<stdio.h>
#include<stdlib.h>

int main(void){
    float totalmark;
    printf("enter your total mark :");
    scanf("%f",&totalmark);
    if (totalmark>=90){
        printf("A grade");
    }else if(totalmark>80){
        printf("B grade");
    }else if(totalmark>70){
        printf("C grade");
    }else if(totalmark>60){
        printf("D grade");
    }else if(totalmark>50){
        printf("E grade");
    }else{
        printf("Failed!!");
    }
    return EXIT_SUCCESS;

}