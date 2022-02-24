#include<stdio.h>
int main(){
    FILE * ptr;
    ptr=fopen("chpt_10_q4set.txt","w");
    int salary1;
    int salary2;
    char c[20];
     char d[22];
     scanf("%d",&salary1);
     scanf("%d",&salary2);
      scanf("%s",c);
     scanf("%s",d); 
    fprintf(ptr,"name1:%s=%d\nname2:%s=%d\n",c,salary1,d,salary2);
    fclose(ptr);
    return 0;
}