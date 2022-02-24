#include <stdio.h>
int main()
{
    int i;
    scanf("%d", &i);
    while (i > 10) // infinite loop example
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
