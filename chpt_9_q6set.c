#include <stdio.h>
typedef struct complex {int x,y;
}comp ;
void display (comp c){                                      
    printf("the complex no.will be: %d+%di\n",c.x,c.y);}        
 int main(){ comp compn[5]; 
  for(int i=0;i<5;i++){  
  printf("enter the real part of no.%d is :",i+1);
  scanf("%d",&compn[i].x); 
  printf("enter the imaginary part of no.%d is :",i+1 );     //for passing an array of a structure to a
  scanf("%d",&compn[i].y); }                                 // function we just pass that strucure with
    for(int i=0;i<5;i++){                                     // a diffrent variable or after changing the   
  display(compn[i]); } }                                      //name of that passing structure to a funcion.
                                         
                                                              
                                                     
          






                                                               