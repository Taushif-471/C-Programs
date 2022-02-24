#include <stdio.h>
#include <stdlib.h>
int main(){ int n;
    int *ptr;         // here the size of int,char,float,double etc. can be allocated. malloc() just allocates
    printf("enter the value of n is:");    //contiguous memory blocks in memory for datatypes(int,floats,char)
    scanf("%d",&n);     //etc to be filled but each memory block is allocated with a default value of zero.And
    ptr = (int *)calloc(n, sizeof(int));      //if the space is not sufficient,memory allocation fails for the
    for(int i=0;i<n;i++){       //datatypes to be filled,then a NULL pointer would be returned by the calloc().
    printf("enter the value of int%d:",i);
    scanf("%d",&ptr[i]);}

     for(int i=0;i<n;i++){
         printf("the value of int%d: =%d\n",i,ptr[i]);}}