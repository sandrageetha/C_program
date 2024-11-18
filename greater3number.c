#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2,num3;
    printf("Enter the three numbers :");
    scanf("%d %d %d",&num1,&num2, &num3);
    if(num1 >num2){
        if (num1 >num3){
            printf("The greatest number is : %d",num1);
        }else{
            printf("The greatest number is : %d",num3);
        }
    
    }else{
        if (num2 >num3){
            printf("The greatest number is :%d",num2);
        }else{
            printf("The greatest number is :%d",num3);
        }
    }
    return EXIT_SUCCESS;
}