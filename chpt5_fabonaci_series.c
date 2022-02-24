

#include <stdio.h>
int main(){ int n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the n value: ");
    scanf("%d", &n);
    //if n ==1
    if (n == 1 ){
        nextTerm=t1;
        }
    //if n==2
    if(n==2)
    { nextTerm=t2;}
    //in n>2
    if(n>2){nextTerm = t1 + t2;}
    for (int i = 4; i <= n; ++i)
    { t1 = t2;   t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    printf("\n fibonacci at term %d is %d\n",n, nextTerm);}