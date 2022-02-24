#include <stdio.h>
#include <string.h>
int main()
{   char *str="samiyulhoda";     // line 4 and 5 has same meaning
    //char str[] = "samiyulhoda";   // line 4 and 5 has same meaning
    int length = strlen(str);
    printf("length of string i.e no. of characters in the string is %d:", length);
}