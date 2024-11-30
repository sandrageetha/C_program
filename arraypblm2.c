#include<stdio.h>
#include<stdlib.h>

int main(void){
    int i,j;
    int k=64,m=0;
    for(i =1;i<=7;i++){
        
        if(i%2==0){
            m++;
            for(j=1;j<=i;j++){
              printf("%d",m); 
            
            }
        }else {
            k++;
            for(j=1;j<=i;j++){
              printf("%c",k);
            
            }
           
                
        }
            
           
    
        
        printf(" \n");
       
    }
}