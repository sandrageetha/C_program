#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num,i,j;
    printf("Enter the size of array :");
    scanf("%d",&num);
    for( i=1;i<=num;i++){
        for(j=0;j>num;j++){
            printf("%d\t", i);
        }
        printf("\n");
    }
}