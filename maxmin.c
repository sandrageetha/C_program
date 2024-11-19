#include<stdio.h>
#include<stdlib.h>

int main(void){
    int num,i,arr[20];
    int min, max;
    printf("Enter the size of array :");
    scanf("%d",&num);
    for( i=0;i<num;i++){
        
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    max=arr[0];
    for(i=0;i<num;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("the max is  : %d\n",max);
    printf("the min is  : %d\n",min);
}