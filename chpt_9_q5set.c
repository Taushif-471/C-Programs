#include <stdio.h>
typedef struct complex {int x,y;
}comp ;
int main(){ comp compn[5];
       for(int i=0;i<5;i++){
           printf("enter the real part of no.%d is:",i+1);
           scanf("%d",&compn[i].x); 
           printf("enter the imaginary part of no.%d is:",i+1 );
           scanf("%d",&compn[i].y); 
           printf("the complex number is : %d+%di\n",compn[i].x,compn[i].y);}}
           

         
           