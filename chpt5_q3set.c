#include <stdio.h>
 float mass(int m);
    int main(){
    int m;
    printf("value of m:");
    scanf("%d",&m);
    float force=mass( m);
printf("value of force is %f\n",force);
return 0;
}
float mass(int m){
  float force=m*9.8;
    return force;
}



