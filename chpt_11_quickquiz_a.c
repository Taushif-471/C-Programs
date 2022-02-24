#include <stdio.h>
#include <stdlib.h>
int main()
{ float*a;
 a=(float*)malloc(10*sizeof(int)); // here the size of int,char,float,double etc. can be allocated malloc()
 for(int i=0;i<10;i++){      //function is just used to allocate space for datatype(int,float,char) to be
     printf("enter the float%d :",i); //filled and returns the pointer of void type of that datatype that is
     scanf("%f",&a[i]);}          //to be filled.

   for(int i=0;i<10;i++){
       printf("the value of float%d=%.2f\n",i,a[i]);} }  

