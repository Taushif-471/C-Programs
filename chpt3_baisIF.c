#include <stdio.h>
int main()
{
    int a;
    printf("enter the value a\n");
    scanf("\n%d", &a);
                       // for if else statement  0 and NULL are interpreted as FALSE in c program while anything
                                // 1 AND STRINGS(means usnder "") are interpreted or considered as TRUE ALWAYS
    if ("a")                                                        // true , 1, "hsddsjhgh"  // false, 0, NULL

    {
        printf("value of a is %d is even\n", a);
    }
    else
    {
        printf("value of a is %d is odd\n", a);
    }
    return 0;
}
