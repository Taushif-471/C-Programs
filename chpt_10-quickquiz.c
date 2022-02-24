#include <stdio.h>
int main(){
     FILE *ptr;   //it means if we will change the name of file fopen will return NULL or either the file 
    int a, b, c;  //doesn't exist at all.Otherwise fopen() will return the pointer(ptr) of the existing file
    char str[13];  //and all the function of .c program will run safely.
    ptr = fopen("chpt-1-file_harry.txt", "r"); 
    if(ptr==NULL){
    printf("fopen will return NULL or this file doesn't exist\n");}
    else{
    fscanf(ptr, "%d%d%d%s", &a, &b, &c, &str);
    printf("the value of a,b,c are %d\t,%d\t, % d\t ,%s", a, b, c, str);
    fclose(ptr);}
    return 0;}