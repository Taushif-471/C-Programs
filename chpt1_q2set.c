#include <stdio.h>
int main() {
    float pi = 3.14,a;        //v;
    int r;                //h;
    printf("enter the value of radius r=");
    scanf("%d", &r);
    // printf("enter the value of height h=");
    // scanf("%d", &h);
    //  v=pi*(r*r)*h;
    //  printf("the volume of the cylinder is v=%.1f",v);
    a=pi*(r*r);
    printf("the area of the circle is A=%f",a);
    return 0;}