#include<stdio.h>
#include<stdlib.h>

int main(void){
    int size, i,j,ctr;
    int a[30],b[20];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        ctr=0;
        for(j=0;j<size;j++){
            if ((i!=j )&& (a[i]==a[j])){
                ctr+=1;
                break;
            }
            
        }
        if(ctr==0){
            printf("The unique element is :%d",a[i]);
        }
    
    }
    // printf("Total number of unique elements are :");
    // for(i=0;i<size;i++){
    //     printf("%d",b[i]);
    // }
        return EXIT_FAILURE;
}