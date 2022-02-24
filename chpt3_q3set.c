#include <stdio.h>
int main(){ 
    int tax;
    int income;
    printf("enter the amount of income=");
    scanf("%d", &income);
    if (income >= 250000 && income <= 500000){
        tax = .05 * (income - 250000); }
    if (income >= 500000 && income <= 1000000){
          tax = .2 * (income - 500000);}
    if (income >= 1000000){
        tax = .3 * (income - 1000000); }
    printf("total tax to be paid by emplye is %d\n", tax);}
