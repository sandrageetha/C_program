#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,j,k;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1 ; i<=limit ;i++){
        for(j=1 ; j<i;j++){
            printf("   ");
        }
        for(k=0;k<=limit-i;k++){
            printf(" %c ",65+k);
        }
        
            printf("\n");

        }
        return EXIT_FAILURE;
}