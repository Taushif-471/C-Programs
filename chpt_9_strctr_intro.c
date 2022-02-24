#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main (){
    // int code=100;
    // float salary=345.345;
    // char name[10]="altamash";
    struct employee a1;
    a1.code=200;
    a1. salary=3407.3645;
    strcpy(a1.name,"altamash");
    printf("%d\n",a1.code);
     printf("%.2f\n",a1.salary);
      printf("%s\n",a1.name);}