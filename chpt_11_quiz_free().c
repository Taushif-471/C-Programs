#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int*b;
    a=(int*)malloc(100*sizeof(int));
    for(int i=0;i<100;i++){
     b=(int*)malloc(2000*sizeof(int));
     printf("enter the value of integer:%d",i);
     scanf("%d",&a[i]);
     free(b);   
    }
   for(int i=0;i<100;i++){
     printf("the value of integer%d: =%d\n",i,a[i]);
     return 0;
   } 
}