#include <stdio.h>
#include<string.h>
typedef struct holder{
    int acno;
    float balance;
    char name[50];
} bank;
int main(){bank b;
b.acno=1233435;
b.balance=46748875.72553;
strcpy(b.name,"advani");
printf("acno of holder is %d\n",b.acno);
printf("balance of holder is %.3f\n",b.balance);
printf("name of holder is %s\n",b.name);}