#include<stdio.h>

int main(void){
    int time=0;
    
    scanf("%d", &time);
    int room_cost=10+time*5;
    
    if (time<8){
        printf("%d", room_cost);
    }
    else{
        printf("%d", 53);
    }
        
    }
