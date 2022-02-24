#include <stdio.h>
typedef struct complex
{  int x;
    int y;
} comp;
void display(comp a){
    printf("the complex number is %d + %di\n ",(a.x),(a.y));}
int main(){ comp compn[5];
 for(int i=0;i<5;i++){
  printf("enter the real part of no.%dis: and imaginary part of no.%dis:",i+1,i+1);
  scanf("%d %d",&compn[i].x,&compn[i].y);}
  for(int i=0;i<5;i++){
   display(compn[i]);} }