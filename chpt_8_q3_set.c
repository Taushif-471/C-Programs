#include <stdio.h>
int strlen(char *str){
    char *p = str;
    int length = 0;
    while (*p != '\0')
    {
        length++;
        *p++;}
    return length;}
int main()
{
    char str[] = "altamash";
    int length = strlen(str);
    printf("length of str is %d", length);}
