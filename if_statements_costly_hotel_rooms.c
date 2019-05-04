#include<stdio.h>
int main(void){
    int cust_age=0;
    int weight_luggage=0;
    
    scanf("%d %d", &cust_age, &weight_luggage);
    
    if (cust_age==60){
        printf("%d", 0);
    }
    else if(cust_age<=10){
        printf("%d", 5);
    }
    else if ((cust_age>10 && cust_age<60)  || cust_age>60){
        if(weight_luggage>20){
            printf("%d",40);
        }
        else{
            printf("%d",30);
        }
    }
return 0;    
}
