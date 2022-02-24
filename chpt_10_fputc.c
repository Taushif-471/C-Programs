#include <stdio.h>
int main(){
    FILE *ptr;
    ptr = fopen("chpt_10_fputc.txt", "w");
    fputc('c', ptr);
    fputc('h', ptr);
    fputc('a', ptr);
    fputc('r', ptr);
    fputc('a', ptr);
    fputc('c', ptr);
    fputc('t', ptr);
    fputc('e', ptr);
    fputc('r', ptr);
    fputc('s', ptr);
    fclose(ptr);
    return 0;}