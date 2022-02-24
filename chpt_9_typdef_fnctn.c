#include <stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[90];
} fnctn ; 
void show (fnctn eid){
    eid.code=200;
    eid.salary=234.73645;
    strcpy(eid.name,"yasir");
    printf("code is %d:\n",eid.code);
    printf("salary is %.2f:\n",eid.salary);
    printf("name is %s:\n",eid.name);
 }  
int main (){
    fnctn eid;
    show(eid);}   