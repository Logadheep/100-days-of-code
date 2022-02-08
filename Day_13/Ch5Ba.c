# include <stdio.h>

int main(){
    int over, work_hour, i = 0, pay;
    while(i < 10){
    scanf("%d", &work_hour);
    over = work_hour - 40;
    pay = over * 12;
    printf("Overtime pay: %d", pay);
    }
}