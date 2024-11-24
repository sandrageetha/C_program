#include<stdio.h>
#include<stdlib.h>
 
int main(void){
    int a[20],i,j,limit,value,loc;
    printf("Enter the limit of array :");
    scanf("%d",&limit);
    printf("Enter the array :");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the location  :");
    scanf("%d",&loc);
    printf("Enter the value :");
    scanf("%d",&value);
    for(i=limit-1;i>=loc-1;i--){
        a[i+1]=a[i];
        }
    a[i+1]=value;

    
    printf("array  is :");
    for(i=0;i<=limit;i++){
        printf("%d",a[i]);
    }
}