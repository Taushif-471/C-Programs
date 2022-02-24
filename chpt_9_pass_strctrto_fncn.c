#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
void show (struct employee esc){
    esc. code=68;
    esc. salary=678.979;
    strcpy(esc.name,"altamash");
    printf("code is %d:\n",esc.code);
    printf("salary is %.2f:\n",esc.salary);
    printf("name is %s:\n",esc.name);
};
int main(){
    struct employee esc;    //before passing a strcture to a function we have to declare a particular 
show(esc);           //name of variable of that paassing structure here we decclared (esc) as a variable.
}