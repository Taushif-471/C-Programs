#include <stdio.h>
float heat(int c);
int main()
{
float farhen;
int c;
printf("ENTER the value of c:");
scanf("%d\n",&c);
farhen=heat(c);
printf("value of farhen is %f\n",farhen);
return 0;
}
float heat(int c){
 float farhen=(c*1.8)+32;
    return farhen;
}