#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num,i,j;
    printf("Enter the size of array :");
    scanf("%d",&num);
    for( i=0;i<num;i++){
        for(j=1;j<=num-i;j++){
            printf("%d\t", j);
        }
        printf("\n");
    }
}