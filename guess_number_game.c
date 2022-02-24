#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do{
         printf("please guess the number between 1 to 100=");
         scanf("%d",&guess);
        if (number > guess){
            printf("higher number please!\n");}
            else if (number < guess){
                printf("lower number please!\n");}
                else{
                    printf("you guessed the random number correctly in %d\n attempts", nguesses);}
                    nguesses++;
    } while (number != guess);
    return 0;}