#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,temp;
    int a[20],b[20];
    printf("Enter the limit for 2 arrays: ");
    scanf("%d",&limit);
    printf("enter the first array :\n");
    for(i=0 ; i<limit;i++){
        scanf("%d",&a[i]);
        }
    printf("enter the second array :\n");
    for(i=0 ; i<limit;i++){
        scanf("%d",&b[i]);
        }
    for(i=0 ; i<limit;i++){
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
        }
    printf("The first array  is :");
    for(i=0 ; i<limit;i++){
        printf("%d ",a[i]);
        }
    printf("\n");
    printf("The Second array is :");
    for(i=0 ; i<limit;i++){
        printf("%d ",b[i]);
        }
    
        return EXIT_FAILURE;
}