#include <math.h>
#include <stdio.h>
                              
int sqr(int a)
{
    printf("inetger wala hai");
return a*a;
}

float sqrw(float b)
{
    printf("float wala hai");
return b*b;
}

int main()
{
    int a=4;
    float b=4.4;
    int A;
    float B;
    A = sqr(a);
    B = sqrw(b);
    printf("area is %d\n", A);
    printf("area is %f\n", B);
    return 0;
}
