#include <stdio.h>
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
 int *value;
     value=&arr[0] ;
    int i=0;
    do{printf("value of element at %d:is %d\n",i+1,value[i]);i++;}
        while(i<15);} //after i=9 garbage values will be printed in the console
     

 
   
   
  
    
    
