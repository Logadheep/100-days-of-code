#include <stdio.h>

int main(){
    int basic, dear, house, gross;
    printf("Basic Salary: ");
    scanf("%d", &basic);
    dear = basic * 4 / 100;
    house = basic * 2 / 100;
    gross = basic + dear + house;
    printf("Gross Salary: %d", gross);
    return 0;
}