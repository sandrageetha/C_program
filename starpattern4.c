#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit, i, j;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1 ; i<=limit;i++){
        for(j=1 ; j<=limit;j++){
            if(i+j<=limit){
              printf("  ");  
            }else{
                printf("* ");
            }
            
        }
        
        printf("\n");
        }
        return EXIT_SUCCESS;
}