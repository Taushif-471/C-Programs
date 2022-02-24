
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main()
    struct employee a1,a2,a3;
    printf("enter the value of a1.code:");
    scanf("%d",&a1.code);
   printf("enter the value of a1.salary:");
    scanf("%.2f",&a1.salary);  
    printf("enter the value of a1.name:");
    scanf("%s",a1.name);
    // gets(a1.name);

    printf("enter the value of a2.code:");
    scanf("%d",&a2.code);
    printf("enter the value of a2.salary:");
    scanf("%.2f",&a2.salary);  
    printf("enter the value of a2.name:");
    scanf("%s",a2.name);

     printf("enter the value of a3.code:");
    scanf("%d",&a3.code);
    printf("enter the value of a3.salary");
    scanf("%.2f",&a3.salary);  
    printf("enter the value of a3.name:");
    scanf("%s",a3.name);

    //    char *name;
    //     scanf("%s",name);
    //     // gets(name);
    //     printf("%s",name);
    return 0;}
