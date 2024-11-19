#include<stdio.h>
#include<stdlib.h>

int main(void){
    int arr[20],cntarr[20];
    int num,i,j,ctr;
    printf("Enter the size of array :");
    scanf("%d",&num);
    printf("Enter the arrays: ");
    for( i=0;i<num;i++){
        scanf("%d",&arr[i]);
        cntarr[i]=-1;
    }
    for(i = 0; i<num;i++){
        ctr=1;
        for(j=i+1;j<num;j++){
            if(arr[i]==arr[j]){
                cntarr[j]=0;
                ctr++;
            }
        }
        if(cntarr[i]!=0){
            cntarr[i]=ctr;
        }
    }
    for(i=0;i<num;i++){
        if(cntarr[i]!=0){
            printf("%d has a frequency  count of %d\n",arr[i],cntarr[i]);
        }
    }
}