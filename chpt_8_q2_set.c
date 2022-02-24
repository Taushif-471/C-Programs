/*#include <stdio.h>
int main(){char b[12];
printf("enter your name: ");
scanf("%s",b);
printf("my name is sammy",b);}*/
    
 #include <stdio.h>
 int main() {char a[]={'s','a','m','m','y','\0'};
    char *p=a;
    while (*p!='\0')
    {printf("%c\t",*p);
    *p++;}}