#include <stdio.h>
int main()
{
    FILE *ptr;
    int a=49;
    float b=7564.83748;
    char c[78]="altamash is a cute boy";
    ptr=fopen("chpt_10_file_wrtng.txt","w");
    fprintf(ptr,"the generated file contain number a= %d,b=%.3f,c=%s",a,b,c);
    fclose(ptr);
    return 0;}