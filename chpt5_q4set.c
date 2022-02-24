#include<stdio.h>
int Fibonacci(int n){
if (n <= 1){ 
return n;}
if(n==2||n=3){
return 1;}
else{
int result;
int Fibonacci;
 Fibonacci(n)=Fibonacci(n - 1) + Fibonacci(n - 2);
 return result;}
}
 
 
int main(){
int n;
printf("Enter the n value: ");
scanf("%d", &n);
int result=Fibonacci(n);
printf("%d\n", result);}