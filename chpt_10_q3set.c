#include <stdio.h>                                                                 //while(1){:always true
  int main(){                                                                     // c = fgetc(ptr);
    FILE *ptr;                                                                      //  printf("%c", c);
    //char c;                                                                        // if (c==EOF){
                                                                                         //break;}}
   ptr = fopen("chpt_10_q3set.txt", "r"); 
                                                                                     // break;} }
  char c = fgetc(ptr); 
     while (c!=EOF){                                    // means both check condition that is commentedand
        printf("%c",c);           //and uncommented is valid to run this program or to read a file content
        c=fgetc(ptr);}                       //or strings character by character by using fgetc( function).


    ptr = fopen("chpt_10_q3set.txt", "w"); 
    char c = fputc(,ptr);


     fclose(ptr);
    return 0;}                                                                                 
                                                                    
