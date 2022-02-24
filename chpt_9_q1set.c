#include <stdio.h>
struct velocity
{
    int x;
    float y;
};
int main()
{
    struct velocity z1, z2;
    z1.x = 4;
    z1.y = 9.4536;
    printf("value of X dim is :%d\n", z1.x);
    printf("value of Y dim is :%f\n", z1.y);
    printf("value of vector velocity(V) in terms of X and Y = %dx + %.2fy\n",z1.x,z1.y);
}