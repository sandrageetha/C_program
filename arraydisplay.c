#include<stdio.h>
#include<stdlib.h>

int** getArray(int size);
void displayArray(int** arr , int );
int main(void){
    int size,i,j;
    printf("Enter the size of array :");
    scanf("%d",&size);
    int** a = getArray(size);
    displayArray(a,size);
    

    
    return EXIT_SUCCESS;
}
int** getArray(int s){
    int** arr1= (int**)malloc(s *sizeof(int*));
    int i,j;
    for(i=0;i<s;i++){
        arr1[i]= (int*)malloc(s * sizeof(int));
        for(j=0;j<s;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    return arr1;
}
void displayArray(int** arr,int s){
    int i,j;
    int** arr2 = arr;
    printf("The result is :\n");
    for(i=0;i<s;i++){
        for(j=0;j<s;j++){
            printf("%d\t",arr2[i][j]);
        }
    printf("\n");
    }

}