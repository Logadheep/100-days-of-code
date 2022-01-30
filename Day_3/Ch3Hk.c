# include <stdio.h>

int main(){
    int no_curr, amount, denom;

    printf("Enter the withdrawal amount: ");
    scanf("%d", &amount);

    printf("\nEnter the currency you prefer(100/200/500/2000): ");
    scanf("%d", &denom);

    no_curr = amount / denom;

    printf("\nThe no of %d notes to be given: %d", denom, no_curr);
}