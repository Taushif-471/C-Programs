#include <stdio.h>
int main()
{

    int vippass = 1;
    int age;
    scanf("%d", &age);
    printf("enter your age:");

    if ((age >= 17 && age <= 70) && (vippass == 1))
    {
        printf("you can driv car, because your age is %d\n", age);
    }
    else
    {
        printf("sorrry, you cant drive car");
    }
    return 0;
}