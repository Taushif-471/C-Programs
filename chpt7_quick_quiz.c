#include <stdio.h>
int main(){int a,b;
int*j; 
j=&a;
int*k;
 k=&b;
printf("value of addrss of j and k is %d\t%d\n",j,k);
j=k+4;
printf("the value of adress j  is %d\n",j);}