#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1;  //instead of (*ptr).code we can also write ptr->code;,ptr->salary;,and 
    struct employee *ptr;  //ptr->name respectively.i.e called arrow operator .
    (*ptr).code=765;                  //(*ptr).code=765; both are same because ptr=&e1 and (*ptr)=e1;
    (*ptr).salary=252.36553;      //(*ptr).salary=252.36553 both are same because ptr is a variable which 
                            //points to or are pointers to all the elements(properties) of the structure
    strcpy((e1).name,"sammy");  //(*ptr).name= sammy i.e *ptr=e1.name because ptr=&e1 and (*ptr)=e1 also      
    printf("code of emloyee e1 is is: %d\n",(*ptr).code); //ptr=name[]or name(only) both have same meaning
    printf("salaray of emloyee e1 is: %.2f\n",(*ptr).salary); //only name or name[0] is itself the address of
    printf("name of emloyee e1 is: %s\n",strcpy((*ptr).name,"sammy"));}// the first index of the array of any
                                                                         //variables.
