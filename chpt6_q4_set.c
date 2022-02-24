#include <stdio.h>
int sum(int *x, int *y) { return *x + *y; }
float avg(int *x, int *y) { return (*x + *y) / 2; }
int main()
{
    int a = 4, b = 6;
    printf("sum of a and b is %d\n avg of a and b us %.2f\n", sum(&a, &b), avg(&a, &b));
    return 0;
}
