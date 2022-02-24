#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr;
    ptr = (int *)calloc(6, sizeof(int)); //it means if datatypes(int,float,char)is not filled in the allocated
 for (int i = 0; i < 6; i++){          //spaces ,the default value of each allocated memory blocks is zero. 
printf("enter the value of int %d=", i);
scanf("%d", &ptr[i]);}
 for (int i = 0; i < 6; i++){
        printf("the value of int%d: =%d\n", i, ptr[i]);}}