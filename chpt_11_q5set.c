#include <stdio.h>
#include <stdlib.h>
int main(){  int *arr;
    int a=7;
    arr = (int *)malloc(15* sizeof(int));
    for (int i = 1; i <= 10; i++){
        printf("table of 7 is %dx%d=%d\n",a,i,(a*i));}
   arr=realloc(arr,5*sizeof(int));
    for(int i=11;i<=25;i++){
        printf("table of 7 is %dx%d=%d\n",a,i,(a*i));}}    