#include <stdio.h>
int main(){int fact=1,n;
printf("enter the value of n=");
scanf("%d",&n);
while(n>1){
  fact*=n;
   n--;
}
printf("the factorial of the number n=%d",fact);}