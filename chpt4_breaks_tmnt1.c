#include <stdio.h>
int main(){
    for(int i=0;i<=100;i++){
     if(i==20){
        break;
    }   
    printf("%d,",i);}}
    // if(i==20){   so it matters that where we write break statement if we write break after printf loop keeps  
   //     break;} //executing till i==20 but if we write break before printf loop executes till i==19 only                                                                             
                                                                                   
    