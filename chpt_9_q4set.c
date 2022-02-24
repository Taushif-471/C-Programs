#include <stdio.h>
#include<string.h>
typedef struct player{
    int runs;
    int sixes;
    float avg;
    char name[50];
} match;
int main(){ match a;
match*b;
(*b)=a;
b->runs=169;
b->sixes=4;
b->avg=59.98757;
strcpy(b->name,"dravid");
printf("runs are :%d\n",b->runs);
printf("sixes are :%d\n",b->sixes);
printf("average is :%.2f\n",b->avg);
printf("name of player is: %s",b->name);}