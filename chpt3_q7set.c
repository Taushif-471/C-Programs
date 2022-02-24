#include<stdio.h>
int main(){   int a,b,c,d;
int greatest;
  printf("enter the four numbers a,b,c,and d:");
  scanf("%d %d %d %d",a,b,c,d);
   greatest=(a>b&&a>c&&a>d)?a:(b>c&&b>d)?b:(c>d)?c:d;                                                                                              
   printf("Max is %d",greatest);                                  
   return 0;}