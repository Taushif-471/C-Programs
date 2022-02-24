#include <stdio.h>

int factorial(int n)
{
 if (n == 0 || n == 1)
    {
     return 1;
    }
    else
    {int fact = n * factorial(n - 1);
        return fact;
    }
}
int main()
{  int n = 7;
    int fact = factorial(n);
    printf(" %d\n", fact);
    return 0;
}
