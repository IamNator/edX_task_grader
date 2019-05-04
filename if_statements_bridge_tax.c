#include<stdio.h>

int main(void){
    int dieOne=0, dieTwo=0;
    scanf("%d %d", &dieOne, &dieTwo);
    
    if (dieOne+dieTwo>=10){
        printf("Special tax\n 36");
    }
    else{
        printf("Regular tax\n%d", (dieOne+dieTwo)*2);
    }
    
    return 0;
}
