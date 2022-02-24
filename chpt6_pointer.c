#include <stdio.h>
int main()
{
    int i = 8;
    int *j;
    j = &i;
    printf("Add i=%u\n", &i);
    printf("Add i=%u\n", j);
    printf("Add j=%u\n", &i);
    printf("value i=%d\n", i);
    printf("value i=%d\n", *(&i));
    printf("value i=%d\n", *j);
    return 0;
}