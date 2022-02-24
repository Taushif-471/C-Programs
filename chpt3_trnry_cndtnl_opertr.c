#include <stdio.h>
int main()
{
    int num;
    printf("enter the  value of num\n");
    scanf("%d", &num);
    // one liner condition
    (num <= 5) ? printf("num is <= 5\n") : printf("num is>= 5\n");
    return 0;
}