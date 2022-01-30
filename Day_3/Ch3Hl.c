# include <stdio.h>

int main(){
    float profit, sell, cost;
    int i = 0;

    while(i < 15){
        printf("\nEnter the selling price of the stock: ");
        scanf("%f", &sell);

        printf("\nEnter the profit of the stock: ");
        scanf("%f", &profit);

        cost = sell - profit;

        printf("The cost must be probably: %f", cost);
    }
}