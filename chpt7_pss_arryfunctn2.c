#include <stdio.h>
void printarray(int *code, int n){for (int i = 0; i < n; i++)
{ printf("the value of element is %d: %d\n", i + 1, code[i]);}}
int main(){ int value[6] = {10, 11, 12, 13, 14, 15}; 
printarray(value, 8);       //garbage value will be shown in the console after n=6
printf("value of element is %d\n",value[2]);}  //garbage value will be shown in the console