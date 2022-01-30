# include <stdio.h>

int main(){
    int num, sum = 0;

    num = 99999;
    while(num != 0){
        sum += ('0' + (num % 10));
        num /= 10;
    }
    printf("%d", sum);
}