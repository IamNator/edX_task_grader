#include<stdio.h>

int main(){
    int num_per_team=0;
    int weight_teamTwo=0;
    int weight_teamOne=0;
    

    scanf("%d", &num_per_team);
    
    int const max=num_per_team*2;
    int n1,n;
    
    //take each weigth individually
    for(n=max; n>0; n--){
        
        for (n1=1; n1<=max; n1++){
            
    
            if (n1%2==0 /*&& n1>=2*/){
                int weight_teamTwon=0;
                scanf("%d", &weight_teamTwon);
                weight_teamTwo=weight_teamTwo+weight_teamTwon;
            }
            else{
               int weight_teamOnen=0;
               scanf("%d", &weight_teamOnen);    
               weight_teamOne=weight_teamOne+weight_teamOnen;
            }
        
            
        }
            
    }
    
    if (weight_teamOne>weight_teamTwo){
        printf("Team %d has an advantage\n", 1);
    }
    else{
        printf("Team %d has an advantage\n", 2);
    }
    
    printf("Total weight for team 1: %d\n", weight_teamOne);
    printf("Total weight for team 2: %d\n", weight_teamTwo);
    
}
