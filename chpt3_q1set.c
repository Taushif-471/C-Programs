#include <stdio.h>
int main(){ 
    int a,b,c;
    printf("enter the marks in a,b and c subjects");
    scanf("%d,%d,%d",&a,&b,&c);
    if((a+b+c>=120) && a>=33 && b>=33 &&c>=33){
        printf("student is pass\n");}
        else{
           printf("student is fail");  
        }
    }