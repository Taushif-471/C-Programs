#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[90];
};
int main (){
    struct  employee sammy={200,546.6354,"samiyulhoda"};
    printf(" code of sammy is :%d\n ",sammy.code);
     printf(" salary  of sammy is: %.2f\n ",sammy.salary);
     printf(" name of sammy is :%s\n ",sammy.name);
}