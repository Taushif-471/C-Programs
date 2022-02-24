#include <stdio.h>
int main()
{
    int i = 10;
     int *j;
     int **k;
    j = &i;
    k = &j;
    printf("value of i is %d\n", **k);
    return 0;
}