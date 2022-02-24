#include <stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[];
};  int main()
{ struct  employee facebook[1000];   //an array of structure with the name of employee 
    facebook[0].code=10;                           //facebook[1000]; means of 1000 employee
   facebook[0].salary=100.987;
   strcpy(facebook[0].name,"harry");

    facebook[1].code=21;  
    facebook[1].salary=100.921;
   strcpy(facebook[1].name,"harish");

                                            //........ and this will go till facebook[999];
   printf("%d",facebook[0].code);
    printf("%.2f",facebook[0].salary);
     printf("%s",strcpy);        //this printf series will also go on till facebook[999];
     return 0;
    }