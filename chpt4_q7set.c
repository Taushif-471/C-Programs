#include <stdio.h>
int main()
{ int fact=1, n;
printf("enter the valie of n=");
scanf("%d",&n);              //for(int i=1;i<=n;i++){ fact=fact*i; or fac*=i;} will give the same factorial of 
 for(int i=n;i>1;i--){                      // a given number n.
      fact=fact*i; }                         //fact*=i; and  fact=fact*i; both have same meaning function.like
                                                  //sum+=i; and sum=sum+i; have same meaning.
    printf("the factorial of number n is =%d", fact);}