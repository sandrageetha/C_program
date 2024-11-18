#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit, i,j;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=0; i<limit;i++){
        for(j=limit-i;j>0;j--){
            printf("* ");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}