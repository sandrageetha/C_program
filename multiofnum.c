#include<stdio.h>
#include<stdlib.h>

int main(void){
    int number ,i, sum ;
    printf("Enter th number :");
    scanf("%d",&number);
    for(i = 1; i<=10;i++){
        sum =number*i;
        printf("%d * %d = %d\n",i, number, sum);
    }
    return EXIT_SUCCESS;
}