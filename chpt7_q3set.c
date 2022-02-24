#include <stdio.h>
int main()
{int i;
    int arr[10],n;
    scanf("%d",&n);
    for ( i = 0; i < 10; i++)

    {
        arr[i] = n * (1 + i);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("table is %dx%d=%d\n", n,i + 1, arr[i]);
    }
}