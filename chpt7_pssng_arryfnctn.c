#include <stdio.h>
void printarray(int code[] ,int n){
for (int i=0;i<n;i++){printf("the value of element is %d: %d\n",i+1,code[i]);}
code[2]=80;}                      //the value change will also be seen in the output
int main(){int value[6]={10,11,12,13,14,15};
printarray(value,8);               //actual values of element will be printed till n=6 after 6 and 
printf("%d",value[2]);}          //  till n=8 garbage values    of the element wiil be shown in the console
