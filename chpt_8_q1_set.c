#include <.h>
int main()
{
    char b[12];
    char* a=b;
 printf("enter the character a:");
    scanf("%c", &a);
    while (*a != '\0')
    { printf("%c", *a);
          *a++;          }
       
       