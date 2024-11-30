#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit ,j,k,space,stars;
    int i=0;
    printf("Enter the limit: ");
    scanf("%d",&limit);
    for(i=0 ; i<=limit*2-1;i++){
        if(i<=limit){
            
            stars=2*i-1;
            space=(limit+1)-i-1;
        }
        else{
            space=i-limit;
            stars=(2*limit-i)*2-1;
        }
        for(j=0;j<space;j++){
            printf("   ");
        }
        for(k=0;k<stars;k++){
            printf(" * ");
        }
        printf("\n");
    }
        return EXIT_FAILURE;
}