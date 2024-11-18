#include<stdio.h>
#include<stdlib.h>

int main(void){
    int size, i,j, ctr=0;
    int a[30];
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the elements :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if (a[i]==a[j]){
                ctr +=1;
                break;

            }
        }
    }
    printf("Total number of duplicate elements are :%d",ctr);

        return EXIT_FAILURE;
}