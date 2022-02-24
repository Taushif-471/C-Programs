#include <stdio.h>
int main(){
    int sum = 0;
    for (int i = 0; i <= 80; i+=8)
    {
             sum+=i ;                                        
    }
       printf("the sum of no.s ocuuring in the table of 8=%d", sum);
   return 0;}