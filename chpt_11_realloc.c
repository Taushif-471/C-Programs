#include <stdio.h>
#include <stdlib.h>
int main(){ int *ptr;
    ptr = (int *)malloc(5* sizeof(int)); 
 for (int i = 0; i < 5; i++){           
printf("enter the value of int %d=", i);
scanf("%d", &ptr[i]);}
 for (int i = 0; i < 5; i++){
        printf("the value of int%d: =%d\n", i, ptr[i]);}
//realloc function reallocate memory for 10 more integers & ptr comes here again to allocate extra memory.
  ptr=realloc( ptr, 3*sizeof(int));
 for (int i = 0; i < 3; i++){           
printf("enter the value of int %d=", i);
scanf("%d", &ptr[i]);}
 for (int i = 0; i < 3; i++){
        printf("the value of int%d: =%d\n", i, ptr[i]);}}   