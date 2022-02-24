#include <stdio.h>
int sum(int x, int y);
int main()
{
    int a = 4, b = 9;
    printf("value of a+b after call by value is %d\n", a + b);
    printf("value of a nad b after call is %d\n%d\n", a, b);
     printf("value of 4+7 after call by value is %d\n", sum(a,b));
    return 0;
}
int sum (int a, int b){
    int c;
    a=60, b=40;
    c=a+b;
    return c ;
}