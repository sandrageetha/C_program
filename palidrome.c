#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int lengthof(char text[]);
int main(void){
    char text[20], rev[20];
    int len,i;
    printf("Enter the text :");
    scanf("%s",text);

    len =lengthof(text);
    for(i = 0 ; i<len;i++){
        rev[i]=text[len-i-1];
    }
    rev[len]='\0';
    if(strcmp(text,rev)==0){
        printf("Its a palindrome");
    }else{
        printf("Its not a palindrome");
    }

    
    return EXIT_FAILURE;
}
int lengthof(char text[]){
    int length=0;
    while(text[length]!='\0'){
        length +=1;
    }
    
    return length;

}