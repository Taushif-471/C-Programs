#include <stdio.h>
int main()
{
    char str[] = "ALTAMASH";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c\t", *ptr);
        *ptr++;
    }
}