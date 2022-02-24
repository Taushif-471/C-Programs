#include <stdio.h>
int main(){ int fact=1,n;
printf("enter the value of n=");
scanf("%d",&n);
do{fact=fact*n;    //fact*=n; and fact=fact*n; both are same and give the same output in the console.
n--;
}while(n>=1);
printf("the factorial of a number n is=%d",fact);}