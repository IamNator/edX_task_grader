#include<stdio.h>

int main(void){
    float num_add_passengers=0;
    float cost_of_fuel=0;
    float amount_per_head=0;
    
    //printf("Please enter the number of passengers?");
    scanf("%f %f", &num_add_passengers, &cost_of_fuel);
    
    
   // printf("Please enter the cost of gasoline");
    //scanf(%d,&cost_of_fuel);
    
    
    if (num_add_passengers){
        amount_per_head = ++cost_of_fuel/++num_add_passengers;
    }
    else{
        amount_per_head=(cost_of_fuel);
    }
    
//    amount_per_head=(float)amount_per_head;
    
    printf("%.2f", amount_per_head);
    
    
    return 0;
}
