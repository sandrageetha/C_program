#include<stdio.h>
#include<stdlib.h>

int main(void){
    int limit , i,flag=0;
    int a[20];
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("Enter the array :\n");
    for(i=0 ; i<limit;i++){
        scanf("%d",&a[i]);

        }
    for(i = 0;i<limit;i++){
        if(a[i]%2==0){
            flag = flag +1;
        }
    }
    printf("sum of even number count :%d", flag);
        return EXIT_FAILURE;
}