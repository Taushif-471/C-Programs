#include <stdio.h>
int main(){
  int marks[12] = {67, 78, 89, 90, 98, 87, 76, 65, 69, 68, 92, 74};
  for (int i = 0; i < 12; i++)
  {
    printf(" the value of marks of student is %d: %d\n", i + 1, marks[i]);
  }
  return 0;}
