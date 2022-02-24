#include<stdio.h>
#include<string.h>
struct date{
    int date;
    int month;
    int year;
    };
int main(){ struct date a,b;
    a. date=26;
    a. month=7;      //try or check this program for different values of date, month and year.
    a. year=2020;
    b. date=28;
    b. month=7;
    b. year=2020;

    if(a.year>b.year){
        printf("a>b\n");}
         else if(a.year==b.year){
            if(a.month>b.month){
                printf("a>b\n");}
            else if(a.month==b.month){
                  if(a.date>b.date){
                       printf("a>b");}
                  else if(a.date==b.date){
                      printf("a==b");}
                     else{
                        printf("a<b");}}
                else{
                 printf("a<b");}}
            else{
            printf("a<b");}}
                  
                   
                   
            
    


        
        
        