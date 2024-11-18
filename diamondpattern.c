#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,j;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1 ; i<limit;i++){
        for(j=i ; j<=limit;j++){
            printf("  ");
        }
        for(j=1 ; j<i;j++){
            printf("* ");
        }
        for(j=1 ; j<=i;j++){
            printf("* ");
        }
            printf("\n");

        }
    for(i=1 ; i<=limit;i++){
        for(j=1 ; j<=i;j++){
            printf("  ");
        }
        for(j=i ; j<limit;j++){
            printf("* ");
        }
        for(j=i ; j<=limit;j++){
            printf("* ");
        }
            printf("\n");

        }
 
    
        
        return EXIT_FAILURE;
}