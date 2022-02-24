#include <stdio.h>
int main()
{
    FILE *ptr;
    int a,b, c;
    ptr = fopen("chpt_10_q1set.txt", "r");
    fscanf(ptr,"%d\t%d\t%d\t",&a,&b,&c);
    printf("the three integers of the file are:%d\t,%d\t,%d\t",a,b,c);
    fclose(ptr);
    return 0;}