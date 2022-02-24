#include <stdio.h>
int main(){ int fact=1,n,i=1;
printf("enter the value of n=");
scanf("%d",&n);
do{fact=fact*i;
  i++;
}while(i<=n);
printf("the factorial of a number n is=%d",fact);}