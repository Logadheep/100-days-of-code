# include <stdio.h>

int main(){
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if ((num % 2) == 0){
        printf("\nYou entered Even number");
    }
    else{
        printf("\nYou entered Odd number");
    }
}