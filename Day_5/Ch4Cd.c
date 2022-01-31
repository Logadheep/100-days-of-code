#include <stdio.h>

int main(){
    int yr, days = 365, i = 1, no_days = 0;

    printf("Enter a valid year: ");
    scanf("%d", &yr);

    yr -= 2001;

    while (yr != 0){
        if (yr % 4 == 0){
            days = 366;
        }
        else{
            days = 365;
        }
        yr -= 1;
        no_days += days;
    }
    int day = (no_days % 7);
    switch(day){
        case 0:
            printf("Monday");
            break;
        case 1:
            printf("Tuesday");
            break;
        case 2:
            printf("Wednesday");
            break;
        case 3:
            printf("Thursday");
            break;
        case 4:
            printf("Friday");
            break;
        case 5:
            printf("Saturday");
            break;
        default:
            printf("Sunday");
            break;
    }
}