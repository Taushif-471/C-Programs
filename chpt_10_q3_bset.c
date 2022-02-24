#include<stdio.h>
int main(){
    FILE*ptr;
    ptr=fopen("chpt_10_q3_bset.txt","w");
char c[120]="Altamash is a cute and naughty boy. He is the only son of altaful bhaiya and bhabhi.Heis going to" ;
char c="be two and half a year this fiteenth of june. He is always ready to go outside for buyig anything";

fprintf(ptr,"%s",c);
fclose(ptr);
return 0;
}
