#include <stdio.h>
int n;
int main()
{
    int facto = 1;
    int n = 4; int temp=n;
    while (n > 0)
    {
        facto = facto * n;
        n--;
       
    }
     printf("n=%d and facto is %d\n", temp, facto);
}
