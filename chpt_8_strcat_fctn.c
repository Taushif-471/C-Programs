#include <stdio.h>
#include <string.h>
int main(){
    char s1[50]="hello armaan";
    char s2[]="good morning, how are you";
    strcat(s1,s2);
    printf("now string S1 becomes or add string of S2:  %s",s1);
}   //it means S1 now adds the string of S2 with itself but without
    //but without any space between the strings S1 and S2. 