#include <stdio.h>
#include <stdlib.h>
int main(){
    int *arr;
    arr = (int *)malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++){
        printf("enter the value of element%d:", i);
        scanf("%d", &arr[i]);}

    for (int i = 0; i < 6; i++){
        printf("the reqiured array will be\n int arr[%d]={%d}\n",i,arr[i]);}
    return 0;}