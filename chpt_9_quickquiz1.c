#include <stdio.h>
#include<string.h>
struct employee{
    int code[3];
    float salary[3];
    char name[90];
};
int main (){int i;
float j;
    struct  employee a1;
   a1.code [3]={100,200,300};
 i=a1.code;
 for(i=0;i<3;i++){
     printf("%d\t",i);}
   a1.salary [3]={123.234,254.4322,236.8654};
    j=a1.salary;
   strcpy(a1.name,"alia sammy lucky");

   printf("%d",a1.code);
    printf("%.2f",a1.salary);
puts(strcpy);}