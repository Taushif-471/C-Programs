#include<stdio.h>
int main(){
    int n;     // no.of interior wallls
    int m;     // no. of exterior walls
    int x=18;  // cost of painting interior walls per sq.ft.
    int y=12;  // cost of painting exterior walls per sq.ft.
    printf("enter the no. of inetrior walls n=");
     scanf("%d",&n);
     printf("enter the no. of exterior  walls m=");
     scanf("%d",&m);
     float f
     int PI=n*x;  //PI is the total cost of painting interior walls 
     int PE=m*y;  //PE is the total cost of painting exterior walls
     printf("the total cost of painting interior walls=%d\n",PI);
     printf("the total cost of painting exterior walls=%d\n",PE);
     int total=PI+PE;
     printf("the total cost of painting the property=%d\n",total);
     return 0;
}