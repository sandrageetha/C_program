#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit, i, j,spa;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++){
        for(spa=1;spa<=limit-i;spa++){
            printf("  ");
        }
        for(j=1 ; j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
        }
    for(i=limit-1 ; i>=1;i--){
        for(spa=1 ; spa<=limit-i;spa++){
            printf("  ");
        }
        for(j=1 ; j<=(2*i-1);j++){
            printf("* ");
        }
        printf("\n");
    }
        return EXIT_SUCCESS;
}