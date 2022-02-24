#include <stdio.h>
void printarray(int *code, int n)
{
    int i;

    for (i = 0; i < n; i++)

    {
        printf("the value of element is %d: %d\n", i + 1, code[i]);
    }
}
int main()
{
    int value[6] = {10, 11, 12, 13, 14, 15};
    printarray(value, 6);
    return 0;
}