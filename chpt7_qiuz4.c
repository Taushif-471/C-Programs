#include <stdio.h>

  void printPattern(int n){
      
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
           
           
        }
        printf("\n");
    }
  }



  void printPattern2(int n){
       for(int i=0;i<n;i++){
           
            //    if(j<(n-(i+1))|| j>())
              for(int k=0;k<(n-(i+1));k++){
                 printf(" ");
              }
              for(int y=0;y<=i;y++){
                  printf("* c");
              }
              
           
           printf("\n");
       }
    
  }



int main(){
//     int m,n,i,j;
// printf("enter the value of  i and j:");
// scanf("%d" "%d", &m ,&n);
//     int arr[i][j];
    // for( int i=0;i<10;i++){
    //   for(int j=0;j<5;j++){
    //     printf("(%d,%d) ",i,j);
    // }
    //   printf("\n");
    // }u

    // int i,j,n;
    // char c='*';
   int n;
    printf("enter the value of n:");
    scanf("%d",&n);

printPattern(n);

printPattern2(n);

}



    

// printf("value of i and j is %d\n %d\t",arr[i],arr[j]);}}