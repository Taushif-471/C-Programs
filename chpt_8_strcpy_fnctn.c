#include <stdio.h>
#include <string.h>
int main()
{
   char str[] = "altamash is the only son of altaful hoda ";
//char *str="altamash is the only son of altaful hoda and darakshan parweeen";
    char s[55];
    strcpy(s, str);
    printf(" now string S becomes *str %s", s);
}       //it means now sring [S] contains the string of string[*str] i.e,altamash is  
         //the only son of altaful hoda and darakshan parweeen.