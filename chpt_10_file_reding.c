#include <stdio.h>
int main()
{
    FILE *ptr;
    int a, b, c;
    char str[13];
 ptr = fopen("chpt-1-file_reding.txt", "r"); //it means we close can .txt file after extracting input/content
    fscanf(ptr, "%d%d%d%s", &a, &b, &c, &str);         //i.e text,int,float etc. from .txt file because after 
   // fclose(ptr);                   // taking input .c program file wil itself do all the remaining function.
    printf("the value of a,b,c are %d\t,%d\t, % d\t ,%s", a, b, c, str);
    fclose(ptr);
    return 0;}