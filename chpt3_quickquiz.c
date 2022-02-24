#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x");
    scanf("%d\n", &x);
    if (x < 0)
    {
        printf("x is negative");
    }
    else if (x > 0)
    {
        printf("x is positive");
    }
    else
    {
        printf("x is 0");
    }
    return 0;
}
