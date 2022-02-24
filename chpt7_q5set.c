#include <stdio.h>
void reverse(int arr[],int n){int i;
for(int i=8;i>=0;i--){
    printf(" %d\t",arr[i]);}
}

int main(){
    int arr[8]={1,2,3,4,5,5,7,8};
    reverse(arr,8); // as in calling function passed n=8 hence 55 a is garbage value
    return 0;}

 
