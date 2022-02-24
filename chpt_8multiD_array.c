#include <stdio.h>
int main(){int students=5,subjects=5;
int subjectsmarks[5][5];
for(int i=0;i<5 ;i++)  for (int j=0;j<5;j++){
printf("enter the value of marks of student %d in subject in %d:",i+1,j+1);
scanf("%d",&subjectsmarks[i][j]);}   for(int i=0;i<5 ;i++)  for (int j=0;j<5;j++){
printf(" the value of marks of student %d in subject %d is: %d\n" ,i+1,j+1,subjectsmarks[i][j]);}}