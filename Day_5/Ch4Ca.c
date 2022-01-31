# include <stdio.h>

int main(){
    float sell, cost, profit, loss;

    printf("Enter selling price: ");
    scanf("%f", &sell);

    printf("Enter cost price: ");
    scanf("%f", &cost);

    if (sell > cost){
        profit = sell - cost;
        printf("You made %f profit by selling.", profit);
    }
    else if(cost > sell){
        loss = cost - sell;
        printf("You incurred %f loss.", loss);
    }
    else{
        profit = 0;
        printf("You did not make any loss or profit");
    }
}