#include<stdio.h>
#include<stdlib.h>

int main(void){
    int number,i,j;
    printf("Enter the size of array :");
    scanf("%d",&number);
    for( i=number;i>0;i--){
        for(j=i;j>0;j--){
            printf("%c\t", 64+j);
        }
        printf("\n");
    }
}