#include <stdio.h>
int main()
{
    int num;
     printf("enter the value of num");
     scanf("%d", &num);
    while (num < 10)
    {
        printf("%d\n", num);
        num++;
    }
    return 0;
}
