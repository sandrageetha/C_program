#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i, sum = 1;
    printf("Enter the limit :");
    scanf("%d", &limit);
    for(i = 2 ; i< limit;i++){
        if (i%2 ==0){
            continue;
        }
        else{
            sum = sum+i;

        }
    }
    printf("The result is :%d", sum);
    return EXIT_SUCCESS;
}