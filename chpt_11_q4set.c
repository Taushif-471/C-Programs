#include <stdio.h>
#include <stdlib.h>
int main(){  int *arr;
    arr = (int *)malloc(5* sizeof(int));
    for (int i = 0; i < 5; i++){
        printf("enter the value of 5 element%d:", i);
        scanf("%d", &arr[i]);}
        printf("the array of 5 integers will be=[");
        for(int i=0;i<5;i++){
            printf("%d,",arr[i]);}
            printf("]\n");

  arr=realloc(arr,10*sizeof(int));
   for (int i = 0; i < 10; i++){
        printf("enter the value of 10 element%d:", i);
        scanf("%d", &arr[i]);}
        printf("the array of 10 integers now will be=[");
        for(int i=0;i<10;i++){
            printf("%d,",arr[i]);}
            printf("]");}
            
