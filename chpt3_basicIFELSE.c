#include <stdio.h>
int main()
{
    int age;
    printf(" you are age:");
    scanf("%d", &age);
    if (1)
    {
        printf("you are above 90\n, you cannot drive car\n");
    }
    else
    {
        printf("you can drive car\n");
    }
    if (age == 50)
    {
        printf("half century\n");
    }
    return 0;
}