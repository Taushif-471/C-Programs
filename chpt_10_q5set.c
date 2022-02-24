#include <stdio.h>
int main()
{
    FILE *ptr;
    int n;
    ptr = fopen("chpt_10_q5set.txt", "r");
    fscanf(ptr, "%d", &n);
    printf("the value of number now is:%d", n);
    printf("\n");
    ptr = fopen("chpt_10_q5set.txt", "a");
    int num;
    num = 2 * n;
    fprintf(ptr, "the value of number n after doubling is:%d", num);
    fclose(ptr);
}