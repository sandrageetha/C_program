#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,j,k;
    for(i =1;i<=7;i++){
        printf("%d",i);
        for(j=2;j<=i;j++){
            if(j%2==0){
              printf(" * ");  
            }
             else {
                printf("%d",j*i);
            }
        }
        printf(" \n");
       
    }
}