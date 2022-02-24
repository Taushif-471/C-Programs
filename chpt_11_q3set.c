#include <stdio.h>
#include <stdlib.h>
void displayArray(int *arr){
    printf("the array of 4 inetgers will be :[");
    for (int i = 0; i < 4; i++)
    {printf("%d ", arr[i]);}
    printf("]");}

int main(){
    int *arr;
    arr = (int *)calloc(4, sizeof(int));
    for (int i = 0; i < 4; i++){
        printf("enter the value of element%d:", i);
        scanf("%d", &arr[i]);}
    // printf("%d",arr);
    displayArray(&arr[0]);}
