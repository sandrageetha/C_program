#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,j;
    for(i =5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf("   ");
        }
        for(j=1;j<=i;j++){
            printf(" * ");
        }
        printf(" \n");
        }
    for(i =2;i<=5;i++){
        for(j=5;j>=i;j--){
            printf("   ");
        }
        for(j=1;j<=i;j++){
            printf(" * ");
        }
        printf(" \n");
        }    
       
    }