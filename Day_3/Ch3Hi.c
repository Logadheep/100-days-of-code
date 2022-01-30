#include <stdio.h>

int main(){
    int num, sum;
    
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    sum = (num/1000) + (num%10);
    printf("Sum of first and last digit: %d", sum);
}