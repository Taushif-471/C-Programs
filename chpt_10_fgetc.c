#include <stdio.h>
int main(){
     FILE *ptr;
    ptr = fopen("chpt_10_fgetc.txt", "r");       //this means fgetc() is used to 
     fgetc(ptr);                                  //read a file character by character
    printf("the value of char c is %c\n", fgetc(ptr) );
    printf("the value of char c is %c\n", fgetc(ptr) );
     printf("the value of char c is %c\n", fgetc(ptr) );
    printf("the value of char c is %c\n", fgetc(ptr) );
     printf("the value of char c is %c\n", fgetc(ptr) );
    printf("the value of char c is %c\n", fgetc(ptr) );
     printf("the value of char c is %c\n", fgetc(ptr) );
    printf("the value of char c is %c\n", fgetc(ptr) );
    fclose(ptr);
    return 0;}
