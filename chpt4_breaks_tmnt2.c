#include <stdio.h>
int main(){ int i=1;
    do{
        printf("%d,",i+1);
        i++;
    if(i==20){
        break;
    }
    }while(i<=100);
    return 0;}