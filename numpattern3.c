#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num,i,j,c=1;
    printf("Enter the size of array :");
    scanf("%d",&num);
    for( i=1;i<=num;i++){
        for(j=0;j<i;j++){
            printf("%d\t", c);
            c++;
        }
        printf("\n");
    }
}