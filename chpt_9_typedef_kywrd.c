#include <stdio.h>
#include<string.h>
    typedef struct employee{  //so typedef keyword is just added or written before declaring the 
    int code;         // structure and name of te structure.so to avoid to type struct employee many times
    float salary;    //in the further program we just write a replica or a copy name of the structure 
    char name[50];    // before semicolon(;) and after the ending } of the declared strucure.
      }atom ;
   int main(){
      atom a;
       atom*ptr;
    ptr=&a;
    ptr->code=200;
    ptr->salary=231.3423;
    strcpy(ptr->name,"altaful"); 
    printf("code of employee is %d:\n", ptr->code);   
    printf("salary of employee is %.2f:\n", ptr->salary);
    printf("name of employee is %s:\n", ptr->name);
    }