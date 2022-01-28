#include <stdio.h>

int main(){
    int num, dig, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0){
        dig = num % 10;
        num = num / 10;
        sum += dig;
    }
    printf("The sum of the digits: %d", sum);
}