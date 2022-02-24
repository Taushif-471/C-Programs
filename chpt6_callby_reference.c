#include <stdio.h>
void wrongswap (int x, int y){
int temp;
temp=x;
x=y;
y=temp;
}
void swap(int *x ,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{int a=3, b=4;
wrongswap(a,b);
printf("value of a and b after swap is %d & %d\n",a,b);//will not work due to call by value 
swap(&a , &b);
printf("value of a and b afetr swap is %d & %d\n",a,b);//will work because of call by reference
return 0;}