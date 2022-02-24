#include <stdio.h>
int times(int *a){
    (*a)*=10;}
int main(){
    int i=10;
    printf("value of i is %d\n", i);
    times(&i);
    printf("value of i is %d\n", i);}
