#include<stdio.h> 
struct complex {
    int x;
    float y;
};
int main(){
    struct complex c;
    c.x=4;
    c.y=6.43625;
    printf("the real part of the no is %d\n",c.x);
    printf("the imaginary part of the no is %.2fi\n",c.y);
    printf("the complex number will be %d+%.2fi",c.x,c.y);}