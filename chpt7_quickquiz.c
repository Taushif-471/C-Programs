#include <stdio.h>
int main(){int i;
    int marks[12];
 for(i=0;i<12;i++){
     printf("enter the value of marks of student %d:",i+1);
     scanf("%d",&marks[i]);}
      for(i=0;i<12;i++){
     printf(" the value of marks of student is %d :%d\n",i+1,marks[i]);}return 0;}
