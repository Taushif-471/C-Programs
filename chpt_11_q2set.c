#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("enter the value of element%d=",i);
        scanf("%d",&ptr[i]);}

        for(int i=0;i<6;i++){
            printf("the value of element%d =%d\n",i,ptr[i]);}
}