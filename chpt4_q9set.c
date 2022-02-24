#include <stdio.h>
int main(){int fact=1,n,i=1;
printf("enter the value of n=");
scanf("%d",&n);
while(i<=n){
    fact=fact*i; i++;
}
printf("the factorial of the number n=%d",fact);}