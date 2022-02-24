#include <stdio.h>
int main(){  
    //int a=8,7,6;//type declaration instructions
    int a = 9;
    int b = 19;
    int temp;
    printf("a=%d\nb=%d", a, b);
    printf("\n");
    temp = a; // temp stores value of a temporarily=9
    a = b;
    b = temp;
    printf("after the swapping the valiues of a and b\n");
    printf("a=%d\nb=%d", a, b);
    printf("\n");
    return 0;}