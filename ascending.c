#include<stdio.h>
#include<stdlib.h>
 
int main(void){
    int a[20],i,j,limit,temp;
    printf("Enter the limit of array :");
    scanf("%d",&limit);
    printf("Enter the array :");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("array sorted in ascending order is :");
    for(i=0;i<limit;i++){
        printf("%d",a[i]);
    }
}