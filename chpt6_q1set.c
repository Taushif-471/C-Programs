#include <stdio.h>
int main(){
int a = 10;
int *b;
b = &a;
 printf("address of a is %u\n", b);
    printf("value of a is %d\n", *b);
 printf("address of a is %u\n", &a);
    printf("value of b is %d\n", &a);
     printf("address of b is %u\n", &b);
    printf("value of a is %d\n", *(&b));
       printf("value of a is %d\n", *(&a));
    return 0;}