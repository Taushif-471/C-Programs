#include <stdio.h>
int main()
{
    char s[] = {'A', 'L', 'I', 'A', '\0'};
    char *ptr;
    ptr = s;
    while (*ptr != '\0')
    {
        printf("%c\t", *ptr);
        *ptr++;
    }
}
