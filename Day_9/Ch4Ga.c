#include <stdio.h>

int main(){
    int y;
    printf("\nEnter the year: ");
    scanf("%d", &y);

    if((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)){
        printf("It is a leap year.");
    }
    else{
        printf("It is not a leap year.");
    }
}