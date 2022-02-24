#include <stdio.h>
float avg(int a, int b, int c);
int main()
{
    int a, b, c;
    float average = avg(3, 3, 5);
    printf("value of average a,b,c is %f", average);
    return 0;
}
float avg(int a, int b, int c){
 float average = (float)(a + b + c) / 3;
return average;
}
