#include<stdio.h>
int main(){
    FILE*ptr;
    int a;
    ptr=fopen("chpt_10_q2set.txt","w");
    printf("enter the value of a:");
    scanf("%d",&a);
    for(int i=1;i<=10;i++){
    fprintf(ptr,"\ttable of a is:%dx%d=%d\n",a,i,(a*i));}
    fclose(ptr);
    return 0;}