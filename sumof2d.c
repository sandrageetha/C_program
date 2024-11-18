#include<stdio.h>
#include<stdlib.h>

int main(void){
    int arr1[20][20],arr2[20][20],c[20][20],i,j,size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    printf("Enter the first array :");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter the Second array :");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            c[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("The sum of array :\n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    return EXIT_FAILURE;
}
