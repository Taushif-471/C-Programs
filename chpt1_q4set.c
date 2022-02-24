#include <stdio.h>
int main() {
    int p,r,t,SI;    
    printf("enter the values of p r t");
    scanf("%d\t%d\t%d",&p,&r,&t);                         //scanf("%d,%d,%d",&p,&r,&t)scanf("%d %d %d",&p,&r,&t);
    SI=(p*r*t)/100;                 //scanf("%d\n%d\n%d") all are same format for taking multiple inputs from user 
    printf("the value of SI is=%d\n",SI);                 //using scanf.                                                      
    return 0;}           // printf("\n%d\n",'\0');("%d",'a'); ("%d",'A');are the same format to print the ASCII
                                   //values of any characters or to find the value of any characters.
                                                                                         