#include<stdio.h>
#include<stdlib.h>

int main(void){
    int size , i,j,temp;
    int a[20];
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("Enter the array :\n");
    for(i=0 ; i<size;i++){
        scanf("%d",&a[i]);

        }
    for(i = 0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i]= a[j];
                a[j]= temp;
            }
        }
    }
    printf("The result array :");
    for(i=0 ; i<size;i++){
        printf("%d ",a[i]);

        }
  
}