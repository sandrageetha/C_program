#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,j,k;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=limit ; i>=1;i--){
        for(j=i ; j<limit;j++){
            printf("   ");
        }
        for(k=(2*i)-1 ; k>=1;k--){
            printf(" * ");
        }
        
            printf("\n");

        }
        return EXIT_FAILURE;
}