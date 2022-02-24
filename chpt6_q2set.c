#include <stdio.h>
int add(int a){
  printf("adress of variable a is %u\n",&a);
    }
int main(){ int i = 8;
 printf("value of i is  %d\n", i);
    add(i);
   printf("value of i is  %d\n", &i) ;
}


