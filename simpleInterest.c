#include<stdio.h>
#include<stdlib.h>

int main(void){
    int P;
    float R, n, SI;
    printf("Enter the Principal amount :");
    scanf("%d", &P);
    printf("Enter the Interest rate :");
    scanf("%f",&R);
    printf("Enter the number of years :");
    scanf("%f",&n);
    SI = (P*R*n)/ 100;
    printf("The simple interest is %f", SI);
    return EXIT_SUCCESS;
}