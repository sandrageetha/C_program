#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit, i, j;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1; i<=limit; i++) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for(i=limit-1; i>=1; i--) {  
        for(j=1; j<=i; j++) {    
            printf("* ");
        }
        printf("\n");
    }

        return EXIT_SUCCESS;
}