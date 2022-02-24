#include <stdio.h>
int main(){int marks[6];
     int*a;
   a=&marks[0];
          for (int i=0 ; i<6;i++){
        printf("enter the value of marks of student %d:",i+1);
scanf("%d",a);
a++;}
 for (int i=0;i<6;i++){
 printf("the value of marks of student is %d:%d\n",i+1,marks[i]);}return 0;} 
        
         
      
        
      
      
