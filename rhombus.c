#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,j,k,m;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1 ; i<=limit;i++){
        for(j=limit-i ; j>=1;j--){
            printf("   ");
        }
        m=64;
        for(k=1 ; k<=limit;k++){
            printf(" %c ",m+k);
            
        }
        
            printf("\n");

        }
        return EXIT_FAILURE;
}