#include <stdio.h>
typedef struct velocity
{  int x;
    int y;
} vel;
vel sumVectors(vel z1,vel z2){
vel add;
add.x=z1.x+z2.x;
add.y=z1.y+z2.y;
return add;}
int main(){ 
    vel z1, z2,add;
    z1.x = 4,  z1.y = 9;
    // printf("value of X and Y is :%d and %d\n",z1.x,z1.y);
    z2.x = 5,  z2.y = 7;
    //  printf("value of S and T is :%d and %d\n",z2.x,z2.y);
 add=sumVectors(z1,z2);
 printf("sum of two vectors z1 + z2 is : %d + %d\n",add.x,add.y);}