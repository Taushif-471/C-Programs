#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(30 * sizeof(int));
    for (int i = 0; i < 10; i++){
        printf("enter the value of element:%d is=", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 10; i++){
        printf("the value of element\integer:%d is=%d\n", i, ptr[i]);}
    return 0;}