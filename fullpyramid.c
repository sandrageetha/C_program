#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,j,k,m;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=1 ; i<=limit;i++){
        for(j=limit-i ; j>0;j--){
            printf("   ");
        }
        m=1;
        for(k=1 ; k<=(2*i)-1;k++){
            
            printf(" %c ", 64+m);
            m++;
        }
        
            printf("\n");

        }
        return EXIT_FAILURE;
}