#include <stdio.h>
int main(){
    for(int i=30;i;i--){  // a special case of decreamenting loop where middle i cannot be equal to zere(0)
        printf("%d,",i);  //where in case i=0 becomes false condition and exits the loop ,hence i must not be=0
    }                     // as long as i=any non-zero value the condition is true and keeps executing.
    return 0;}