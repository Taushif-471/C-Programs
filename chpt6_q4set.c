#include <stdio.h>
float sum(float x,float y ){
    float sum=x+y;
return sum;}
float avg(float x,float y){
    float avg=(x+y)/2;
    return avg;}
float main(){float x,y;
printf("enter the value of x and y is %f\t%f",x,y);
scanf("%f %f",&x,&y);
printf("sum of x and y is %.3f\n",sum(x,y));
printf("avg of x and y is %.3f\n",avg(x,y));}