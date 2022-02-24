#include <stdio.h>
int main()
{
    int i = 0;
    int num = 10;
    while (i < 20)
    {
        i = i + 1;
        if (i!= num)
        {
            continue;
        }
        else
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
