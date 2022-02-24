#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "for";             // when s1=S2="for"; strcmp(s1,S2); giving value equal to zero(0)
    char S2[] = "joke";                              // strcmp(S2,s1);giving positive value 1)
    int value = strcmp(s1, S2);                      // strcmp(s1,S2);(giving negative value -1)
    printf("the value of value is %d:", value);
}  //for determining the output value,ascii value of the second string's first mismatching 
//character is always subtracted from the ascii value of the first string's corresponding first
//mismatching character inside the strcp() function. And the first string is always written before the 
//,(comma) while the second after the comma inside the strcmp function.                                               
